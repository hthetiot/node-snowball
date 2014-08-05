var snowball = require('../index');

exports['stemword'] = function (test) {
    test.equal(snowball.stemword('consignment'), "consignm");
    test.done();
};