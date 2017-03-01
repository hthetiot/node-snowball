#include "libstemmer/include/libstemmer.h"
#include "libstemmer/runtime/header.h"

#include "snowball.h"

using namespace v8;

NAN_METHOD(Stemword) {

    // Check that there are enough arguments. If we access an index that doesn't
    // exist, it'll be Undefined().
    if (info.Length() < 1) {
        // No argument was passed. Throw an exception to alert the user to
        // incorrect usage. Alternatively, we could just use 0.
        Nan::ThrowTypeError("First argument must be a string");

    } else if ( !info[0]->IsString() && !info[0]->IsArray()) {
        Nan::ThrowTypeError("Wrong first argument type, expect type String or Array.");
    }

    // Cast a value to a specific type. See
    // http://izs.me/v8-docs/classv8_1_1Value.html for available To*() functions
    // and type checking functions. When converting to integer, make sure the
    // POD type you use is big enough!

    // Prepare output
    const char * strValue;
    const unsigned char * stemmed;

    // Convert to C String
    v8::String::Utf8Value lang(info[1]);
    v8::String::Utf8Value enc(info[2]);
    const char * strLang = (info.Length() > 1) ? *lang : "english";
    const char * strEnc = (info.Length() > 2) ? *enc : "UTF_8";

    struct sb_stemmer * stemmer;

    stemmer = sb_stemmer_new(strLang, strEnc);

    if (stemmer == NULL) {
        Nan::ThrowError("Could not create stemmer.");


    } else if (info[0]->IsArray()) {

        v8::Handle<v8::Array> strArray = v8::Handle<v8::Array>::Cast(info[0]);
        int strArrayLength = strArray->Length();

        v8::Local<v8::Array> arrayResult = Nan::New<v8::Array>(strArrayLength);
        for (int i = 0; i < strArrayLength; i++) {

            // Convert to C String
            v8::String::Utf8Value str(strArray->Get(i));
            strValue = *str;

            stemmed = sb_stemmer_stem(
                stemmer,                     // Use exising instance
                (unsigned char *)(strValue), // Convert to "unsigned char *"
                strlen(strValue)             // Get length
            );

            Nan::Set(arrayResult, i, Nan::New((const char *)stemmed).ToLocalChecked());
        }

        sb_stemmer_delete(stemmer);
        info.GetReturnValue().Set(arrayResult);

    } else {

        // Convert to C String
        v8::String::Utf8Value str(info[0]);
        strValue = (info.Length() > 0) ? *str : "";

        stemmed = sb_stemmer_stem(
            stemmer,                     // Use exising instance
            (unsigned char *)(strValue), // Convert to "unsigned char *"
            strlen(strValue)             // Get length
        );

        v8::Local<v8::String> strResult = Nan::New((char *)stemmed).ToLocalChecked();

        sb_stemmer_delete(stemmer);

        info.GetReturnValue().Set(strResult);
    }
}