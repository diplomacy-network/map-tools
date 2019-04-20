var fs = require('fs'),
    xml2js = require('xml2js');


    var inspect = require('eyes').inspector({maxLength: false})

    var parser = new xml2js.Parser();
    fs.readFile(__dirname + '/MapTest.svg', function(err, data) {
        parser.parseString(data, function (err, result) {
           inspect(result);
            console.log('Done');
        });
    });