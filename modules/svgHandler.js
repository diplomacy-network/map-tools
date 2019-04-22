const fs = require('fs');
const parser = require('fast-xml-parser');
const jmespath = require('jmespath');

const inspect = require('eyes').inspector({
    maxLength: false
});



module.exports = {
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

    checkIfAllProvincesAreUnique: function (parsed) {
        //Get a list of all provinceIDs
        expression = "svg.g[?id=='tiles'].g[].path[].id"
        result = jmespath.search(parsed, expression)
        // inspect(result)
        return (new Set(result).size === result.length);
    }
}

return module.exports;