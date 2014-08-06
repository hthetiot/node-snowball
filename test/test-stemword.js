var snowball = require('../index');

function testStemWords(test, lang) {

	var words = require("./" + lang + ".json");
    var wordsIndex = Object.keys(words);

	wordsIndex.forEach(function (word) {
		test.equal(snowball.stemword(word, lang), words[word]);
	});
}

exports['stemword'] = function (test) {

    testStemWords(test, "english");
    testStemWords(test, "french");

    test.done();
};