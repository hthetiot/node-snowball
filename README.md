**node-snowball**

[![npm version](https://img.shields.io/npm/v/node-snowball.svg?style=flat)](https://www.npmjs.com/package/node-snowball)
[![Build Status](https://github.com/hthetiot/node-snowball/actions/workflows/main.yaml/badge.svg)](https://github.com/hthetiot/node-snowball/actions/workflows/main.yaml)

[![NPM](https://nodei.co/npm/node-snowball.png)](https://npmjs.org/package/node-snowball)

This stemming module for Node.js provides stemming capability for a variety of languages using Dr. M.F. Porter's Snowball API.
That allow you to get from a word a reduced, inflected (or sometimes derived) word from the original word stem, base or root.

Examples:
> A stemmer for English, for example, should identify the string "cats" (and possibly "catlike", "catty" etc.)
> as based on the root "cat", and "stemmer", "stemming", "stemmed" as based on "stem". A stemming algorithm
> reduces the words "fishing", "fished", and "fisher" to the root word, "fish". On the other hand, "argue",
> "argued", "argues", "arguing", and "argus" reduce to the stem "argu" (illustrating the case where the stem
> is not itself a word or root) but "argument" and "arguments" reduce to the stem "argument".

This library is using bindings to the [libstemmer](https://snowballstem.org/download.html) C library.
It's support

More about Stemming:
- [Stemming wikipedia](http://en.wikipedia.org/wiki/Stemming)
- [Racinisation wikipedia](http://fr.wikipedia.org/wiki/Racinisation)

More about Snowball libstemmer library:
- [https://snowballstem.org](https://snowballstem.org)

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
 * armenian
 * basque
 * catalan
 * catalan
 * danish
 * dutch
 * dutch
 * english
 * finnish
 * french
 * french
 * german
 * greek
 * hindi
 * hungarian
 * indonesian
 * irish
 * italian
 * lithuanian
 * nepali
 * norwegian
 * portuguese
 * romanian
 * russian
 * serbian
 * spanish
 * swedish
 * tamil
 * turkish
 * yiddish
 * porter (not a language)

### Supported encoding third argument:

 * UTF-8
 * ISO-8859-1
 * ISO-8859-2

## To compile, run

Supported NodeJS versions: 18.x, 20.x, 22.x


```bash
npm run clean
npm run configure
npm run build
npm test
```

With Custom Python 3.11 PATH for node-gyp:

```bash
NODE_GYP_FORCE_PYTHON=/opt/homebrew/bin/python3.11 npm rebuild
```

## License

(MIT License)

Copyright (c) 2014 Harold Thetiot

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
