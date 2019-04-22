const fs = require('fs');
const parser = require('fast-xml-parser');
var jsonata = require("jsonata");

const inspect = require('eyes').inspector({
    maxLength: false
});



module.exports = {
    /**
     * Parses a XML file to a json file
     *
     * @returns json file as defined under dnw-planning/mapTools/xml-parsed.json
     */
    parseXmlToJson: function () {
        file = fs.readFileSync(__dirname + '/MapTest.svg')
        xmlData = file.toString();

        options = {
            "ignoreAttributes": false,
            "parseAttributeValue": true,
            "attributeNamePrefix": ""
        }

        if (parser.validate(xmlData) === true) {
            var parsed = parser.parse(xmlData, options);
        } else {
            throw "This is not a valid xml document!"
        }
        return parsed;
    },
    
    checkIfAllProvinceIDsAreUnique: function (parsed) {
        //Get a list of all provinceIDs
        expression = jsonata("svg.g[id='tiles'].g.path.id");
        result = expression.evaluate(parsed)
        // inspect(result)
        return (new Set(result).size === result.length);
    },

    retrieveProvincePaths: function (parsed) {
        expression = jsonata("svg.g[id = 'tiles'].g");
        result = expression.evaluate(parsed);
        var stagedHandled = {provinces: []};
        
        result.forEach(tasu => {
            currentTiletype = tasu.id;
            
            tasu.path.forEach(finn => {
                if(finn.id.includes("union_")) {
                    //UNION Handler
                    current = {
                        short: finn.id,
                        tiletype: currentTiletype,
                        provinceOutlinePath: finn.d,
                    }
                    
                } else {
                    stagedHandled.provinces.push({
                        short: finn.id,
                        tiletype: currentTiletype,
                        provinceOutlinePath: finn.d,
                        unionParts: [{
                            id: "main",
                            unionPartPath: finn.d
                        }]
                    })
                }
                
            });
        });
        return stagedHandled
    }
}

return module.exports;