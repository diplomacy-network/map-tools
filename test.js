const inspect = require('eyes').inspector({
    maxLength: false
});

const svgHandler = require ('./modules/svgHandler.js')

let ret = svgHandler.parseXmlToJson()
// inspect(ret)
unique = svgHandler.checkIfAllProvinceIDsAreUnique(ret);
console.log(unique)