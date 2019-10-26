const snowball = require('../index')

describe('test stemword', () => {
  ['english', 'french', 'arabic'].forEach(lang => {
    describe(`for ${lang} words`, () => {
      const words = require(`./resources/${lang}.json`); 

      Object.entries(words).forEach(([word, expected]) => {
        it(`should handle: ${word}`, () => {
          expect(snowball.stemword(word, lang)).toBe(expected);
        });
      });
    });
  });

  it('should fail on unknown language', () => {
    expect(() => snowball.stemword('Hello world !', 'tl')).toThrow(Error('Could not create stemmer.'));
  });
});