const victor = require('victor');
const {
    parseSVG,
    makeAbsolute
} = require('svg-path-parser');


const TOL = 1;

module.exports = {

    vec: function (object) {
        this.x0 = object.x0;
        this.y0 = object.y0;
        this.x = object.x;
        this.y = object.y;
    },

    polygonizeVectorOfProvince: function (vec) {
        end = new victor(vec.x, vec.y);
        start = new victor(vec.x0, vec.y0);
        direction = getDirection(start, end);

        polygon = new Array(0);
        switch (direction) {
            case 0:
                one = start.clone().add(new victor(-TOL, TOL)).toArray();
                two = start.clone().add(new victor(-TOL, -TOL)).toArray();
                three = end.clone().add(new victor(TOL, -TOL)).toArray();
                four = end.clone().add(new victor(TOL, TOL)).toArray();
                polygon.push(one, two, three, four);
                break;
            case 1:
                one = start.clone().add(new victor(-TOL, 0)).toArray();
                two = start.clone().add(new victor(0, -TOL)).toArray();
                three = end.clone().add(new victor(TOL, 0)).toArray();
                four = end.clone().add(new victor(0, TOL)).toArray();
                polygon.push(one, two, three, four);
                break;
            case 2:
                one = start.clone().add(new victor(-TOL, -TOL)).toArray();
                two = start.clone().add(new victor(TOL, -TOL)).toArray();
                three = end.clone().add(new victor(TOL, TOL)).toArray();
                four = end.clone().add(new victor(-TOL, TOL)).toArray();
                polygon.push(one, two, three, four);
                break;
            case 3:
                one = start.clone().add(new victor(0, -TOL)).toArray();
                two = start.clone().add(new victor(TOL, 0)).toArray();
                three = end.clone().add(new victor(0, TOL)).toArray();
                four = end.clone().add(new victor(-TOL, 0)).toArray();
                polygon.push(one, two, three, four);
                break;
            case 4:
                one = start.clone().add(new victor(TOL, -TOL)).toArray();
                two = start.clone().add(new victor(TOL, TOL)).toArray();
                three = end.clone().add(new victor(-TOL, TOL)).toArray();
                four = end.clone().add(new victor(TOL, -TOL)).toArray();
                polygon.push(one, two, three, four);
                break;
            case 5:
                one = start.clone().add(new victor(TOL, 0)).toArray();
                two = start.clone().add(new victor(0, TOL)).toArray();
                three = end.clone().add(new victor(-TOL, 0)).toArray();
                four = end.clone().add(new victor(0, -TOL)).toArray();
                polygon.push(one, two, three, four);
                break;
            case 6:
                one = start.clone().add(new victor(TOL, TOL)).toArray();
                two = start.clone().add(new victor(-TOL, TOL)).toArray();
                three = end.clone().add(new victor(-TOL, -TOL)).toArray();
                four = end.clone().add(new victor(TOL, -TOL)).toArray();
                polygon.push(one, two, three, four);
                break;
            case 7:
                one = start.clone().add(new victor(0, TOL)).toArray();
                two = start.clone().add(new victor(-TOL, 0)).toArray();
                three = end.clone().add(new victor(0, -TOL)).toArray();
                four = end.clone().add(new victor(TOL, 0)).toArray();
                polygon.push(one, two, three, four);
                break;
            default:
                null;
        }
        return polygon;
    },


    //Berechnet die Richtung, in die der Vektor zeigt. Analog zu den Himmelsrichtungen beginnt die Nummerierung im Osten bei 0 und ist in insgesamt 8 Richtungen im mathematisch positiven (gegen den Uhrzeigersinn) angeordnet
    //vec.x0/y0 definiert den Startpunkt
    getDirection: function (start, end) {

        diff = end.clone().subtract(start);
        deg = diff.angleDeg();

        if (deg == 0) {
            return 0;
        } else if (0 < deg < 90) {
            return 1;
        } else if (deg == 90) {
            return 2;
        } else if (90 < deg < 180) {
            return 3;
        } else if (deg == 180) {
            return 4;
        } else if (-180 < deg < -90) {
            return 5;
        } else if (deg == -90) {
            return 6;
        } else if (0 < deg < -90) {
            return 7;
        }
    },

    createPolygonFromPathForTest: function (path) {
        var commands = parseSVG(path);
        makeAbsolute(commands)
        

    }
}