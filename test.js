const inspect = require('eyes').inspector({
    maxLength: false
});
const fs = require('fs')

const svgHandler = require ('./modules/svgHandler.js')

let ret = svgHandler.parseXmlToJson()
fs.writeFileSync("./xmlParsed.json", JSON.stringify(ret))
// inspect(ret)
unique = svgHandler.checkIfAllProvinceIDsAreUnique(ret);
console.log(unique)
let returnvalue = svgHandler.retrieveProvincePaths(ret)
inspect(returnvalue)