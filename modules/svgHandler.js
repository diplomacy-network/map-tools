const fs = require('fs');
const parser = require('fast-xml-parser');
const jsonQ = require("jsonq");

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
        let data = jsonQ(parsed);
        res = data.find('g', function(){
            return this.id === "tiletypes"
        });
        // inspect(res)
        res.each(function(index, path, value){
             console.log(path);
     })
    }
}

return module.exports;