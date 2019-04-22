const inspect = require('eyes').inspector({
    maxLength: false
});

const svgHandler = require ('./modules/svgHandler.js')

let ret = svgHandler.parseXmlToJson()
// inspect(ret)
unique = svgHandler.checkIfAllProvincesAreUnique(ret);
console.log(unique)