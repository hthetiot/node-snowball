**node-snowball**

[![NPM](https://nodei.co/npm/node-snowball.png)](https://npmjs.org/package/node-snowball)

[![Build Status](https://travis-ci.org/hthetiot/node-snowball.svg?branch=master)](https://travis-ci.org/hthetiot/node-snowball)

This stemming module for Node.js provides stemming capability for a variety of languages using Dr. M.F. Porter's Snowball API.
That allow you to get from a word a reduced, inflected (or sometimes derived) word from the original word stem, base or root.

Examples:
> A stemmer for English, for example, should identify the string "cats" (and possibly "catlike", "catty" etc.)
> as based on the root "cat", and "stemmer", "stemming", "stemmed" as based on "stem". A stemming algorithm
> reduces the words "fishing", "fished", and "fisher" to the root word, "fish". On the other hand, "argue",
> "argued", "argues", "arguing", and "argus" reduce to the stem "argu" (illustrating the case where the stem
> is not itself a word or root) but "argument" and "arguments" reduce to the stem "argument".

This library is using bindings to the [libstemmer](http://snowball.tartarus.org/download.html) C library.
It's support

More about Stemming:
- [Stemming wikipedia](http://en.wikipedia.org/wiki/Stemming)
- [Racinisation wikipedia](http://fr.wikipedia.org/wiki/Racinisation)

## Install
```
npm install node-snowball
```

## Usage

```javascript
var snowball = require('node-snowball');

// Using String
snowball.stemword('consignment'); // 'consign'

// Using String and a specific language algorithm
snowball.stemword('consignment', 'english'); // 'consign'
snowball.stemword('continuation', 'french'); // 'continu'

// Or using Array of string
snowball.stemword(['consignment', 'conspiring'], 'english'); // ['consign', 'conspiri']
snowball.stemword(['continuation', 'contrainte'], 'french'); // ['continu', 'contrain']
```

## Quick Doc

``` javascript
snowball.stemword(
    word || words, // The word or group of words that you need the stemming from
    language,      // The language (optional, default is "english")
    encoding       // The text encoding (optional, default is "UTF-8")
);
```

### Supported language second argument:

 * arabic
 * danish
 * dutch
 * english
 * finnish
 * french
 * german
 * hungarian
 * italian
 * norwegian
 * portuguese
 * spanish
 * swedish
 * romanian
 * tamil
 * turkish
 * porter (not a language)

### Supported encoding third argument:

 * UTF-8
 * ISO-8859-1
 * ISO-8859-2

## To compile, run

Supported NodeJS versions: 0.11, 0.12, 4.x, 6.x, 7.x

```
npm build .
```

## License

(MIT License)

Copyright (c) 2014 Harold Thetiot <hthetiot@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
