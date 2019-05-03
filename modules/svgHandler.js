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

        });
    });
}

function constructProvinceObject(rawObject, tiletype) {
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

    } else if (rawObject.id.includes('union_') === true && rawObject.hasOwnProperty('g')) {
            // Union
    } else {
        throw `This object seems odd. We currently don't know how to traverse it!`;
    }
}

function returnIdPreferSerifId(object) {
    if (object.hasOwnProperty('serif:id' === true)) {
        return object['serif:id'];
    } else if (object.hasOwnProperty('id' === true)) {
        return object.id;
    } else {
        throw `ID not found in Layer 1!`;
    }
}

function getAllTiletypes(parsed) {
    var expression = jsonata("svg.g[id = 'tiles'].g.id");
    return expression.evaluate(parsed);
}


return module.exports;