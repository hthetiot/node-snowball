var snowball = require('./build/Release/snowball'), 
	cache = {};

exports.stemword = function (word) {
    if (typeof cache[word] !== 'undefined') {
        return cache[word];
    }
    return cache[word] = snowball.stemword(word);
}

exports.emptyCache = function () {
    cache = {};
}