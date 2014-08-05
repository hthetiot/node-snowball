[![Build Status](https://travis-ci.org/hthetiot/node-snowball.svg?branch=master)](https://travis-ci.org/hthetiot/node-snowball)


**node-snowball**

Bindings to the [libstemmer](http://snowball.tartarus.org/download.php) C library.

## Install
```
npm install node-snowball
```

## Usage

```javascript
var snowball = require('node-snowball');
snowball.stemword('consignment'); //consign
snowball.stemword('consignment', 'english'); // consign
snowball.stemword('continuation', 'french'); // continu
```

## Doc

``` javascript
snowball.stemword(
	word,      // The word you need the stemming from 
	language,  // The language (optional, default is "english") 
	encoding   // The text encoding (optional, default is "UTF-8") 
); 
```

Supported language argument:

 * danish
 * dutch
 * english
 * finnish
 * french
 * german
 * hungarian
 * italian
 * norwegian
 * porter
 * protuguese
 * spanish
 * swedish
 * romanian

Supported encoding argument:

 * UTF-8
 * ISO-8859-1

## To compile, run

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