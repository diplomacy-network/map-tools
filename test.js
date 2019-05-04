const inspect = require('eyes').inspector({
    maxLength: false
});
const fs = require('fs')

const svgHandler = require ('./modules/svgHandler.js')
const path = __dirname + '/MapTest.svg'

let ret = svgHandler.parseXmlToJson(path)
fs.writeFileSync("./xmlParsed.json", JSON.stringify(ret))
// inspect(ret)
unique = svgHandler.checkIfAllProvinceIDsAreUnique(ret);
console.log(unique)

fs.writeFileSync("./handled.json", JSON.stringify(svgHandler.generateSvgHandled(ret)))