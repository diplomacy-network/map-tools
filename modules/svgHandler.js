const fs = require('fs');
const parser = require('fast-xml-parser');
var jsonata = require("jsonata");

const inspect = require('eyes').inspector({
    maxLength: false
});



module.exports = {
    parseXmlToJson: function (path) {
        file = fs.readFileSync(path);
        xmlData = file.toString();

        options = {
            "ignoreAttributes": false,
            "parseAttributeValue": true,
            "attributeNamePrefix": ""
        }

        if (parser.validate(xmlData) === true) {
            var parsed = parser.parse(xmlData, options);
        } else {
            throw "This is not a valid xml document!";
        }
        return parsed;
    },

    checkIfAllProvinceIDsAreUnique: function (parsed) {
        //Get a list of all provinceIDs
        expression = jsonata("svg.g[id='tiles'].g.path.id");
        result = expression.evaluate(parsed);
        // inspect(result)
        return (new Set(result).size === result.length);
    },

    generateSvgHandled: function (parsed) {
        var tiletypes = getAllTiletypes(parsed);
        var handled = addProvincesByTiletype(parsed, tiletypes);
        console.log(handled)
    },




    // retrieveProvincePaths: function (parsed) {
    //     expression = jsonata("svg.g[id = 'tiles'].g");
    //     result = expression.evaluate(parsed);
    //     var stagedHandled = {provinces: []};

    //     result.forEach(tasu => {
    //         currentTiletype = tasu.id;

    //         tasu.path.forEach(finn => {
    //             if(finn.id.includes("union_")) {
    //                 //UNION Handler
    //                 current = {
    //                     short: finn.id,
    //                     tiletype: currentTiletype,
    //                     provinceOutlinePath: finn.d,
    //                 }

    //             } else {
    //                 stagedHandled.provinces.push({
    //                     short: finn.id,
    //                     tiletype: currentTiletype,
    //                     provinceOutlinePath: finn.d,
    //                     unionParts: [{
    //                         id: "main",
    //                         unionPartPath: finn.d
    //                     }]
    //                 })
    //             }

    //         });
    //     });
    //     return stagedHandled
    // }
}

function addProvincesByTiletype(parsed, tiletypes) {
    var handled = {
        provinces: [],
        passthroughs: []
    };
    tiletypes.forEach(currentTiletype => {
        var currentTiletypeData = jsonata("svg.g[id = 'tiles'].g[id = '" + currentTiletype + "'].$sift(function($v, $k) {$k ~> /g|path/}).*").evaluate(parsed);
        currentTiletypeData.forEach(currentRawObject => {
            handled.provinces.push(constructProvinceObject(currentRawObject, currentTiletype));

        });
    });
    return handled;
}

function constructProvinceObject(rawObject, tiletype) {
    // console.log(rawObject)
    if (rawObject.hasOwnProperty('d') === true) {
        // Normal 'flat' province
        return {
            short: returnIdPreferSerifId(rawObject),
            tiletype: tiletype,
            provinceOutlinePath: rawObject.d,
            unionParts: [{
                id: "main",
                unionPartPath: rawObject.d
            }]
        }
    } else if (rawObject.id.includes('union_') && rawObject.hasOwnProperty('path')) {
            // Union
            var id = rawObject.id.replace('union_', '')
            var object = {
                short: id,
                tiletype: tiletype,
                provinceOutlinePath: rawObject.path.find(element => returnIdPreferSerifId(element) === 'main').d 
            };
            var unionParts = [];
            rawObject.path.forEach(rawUnionPart => {
                if(returnIdPreferSerifId(rawUnionPart) === 'main') return;
                var unionPart = {
                    id: id + '.' + returnIdPreferSerifId(rawUnionPart).replace(/[()]/g, ''),
                    unionPartPath: rawUnionPart.d
                }
                unionParts.push(unionPart)
            });
            object.unionParts = unionParts;
            
            // console.log(object)
            return object;
    } else {
        throw `This object seems odd. We currently don't know how to traverse it!\n`;
    }
}

function returnIdPreferSerifId(object) {
    if (object.hasOwnProperty('serif:id')) {
        return object['serif:id'];
    } else if (object.hasOwnProperty('id')) {
        return object.id;
    } else {
        console.log(object)
        console.log(object.hasOwnProperty('serif:id'))
        console.log(object.hasOwnProperty('id'))
        throw `ID not found in Layer 1!`;
    }
}

function getAllTiletypes(parsed) {
    var expression = jsonata("svg.g[id = 'tiles'].g.id");
    return expression.evaluate(parsed);
}


return module.exports;