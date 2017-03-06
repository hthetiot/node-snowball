var snowball = require('../index');

function testStemWords(test, lang) {

  var words = require("./" + lang + ".json");
    var wordsIndex = Object.keys(words);

  wordsIndex.forEach(function (word) {
    test.equal(snowball.stemword(word, lang), words[word], "[" + lang + "] Failed to stem: " + word);
  });
}

function testUnknownLanguage(test) {
  test.throws(function() {
    snowball.stemword("Hello world !", "tl");
  }, Error, "Could not create stemmer.");
}


exports['stemword'] = function (test) {

    testStemWords(test, "english");
    testStemWords(test, "french");
    testStemWords(test, "arabic");
    testUnknownLanguage(test, "tl");

    test.done();
};