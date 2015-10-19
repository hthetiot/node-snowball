#define BUILDING_NODE_EXTENSION
#include <node.h>
#include <v8.h>
#include "libstemmer/include/libstemmer.h"
#include "libstemmer/runtime/header.h"

using namespace v8;

// Returns the Nth number in the fibonacci sequence where N is the first
// argument passed.
Handle<Value> Stemword(const v8::Arguments& args) {
    HandleScope scope;

    // Check that there are enough arguments. If we access an index that doesn't
    // exist, it'll be Undefined().
    if (args.Length() < 1) {
        // No argument was passed. Throw an exception to alert the user to
        // incorrect usage. Alternatively, we could just use 0.
        return ThrowException(
            Exception::TypeError(String::New("First argument must be a string"))
        );
    } else if (
        !args[0]->IsString() && !args[0]->IsArray()
    ) {
        ThrowException(Exception::TypeError(String::New("Wrong first argument type, expect type String or Array.")));
        return scope.Close(Undefined());
    }

    // Cast a value to a specific type. See
    // http://izs.me/v8-docs/classv8_1_1Value.html for available To*() functions
    // and type checking functions. When converting to integer, make sure the
    // POD type you use is big enough!

    // Prepare output
    const char * strValue;
    const unsigned char * stemmed;

    // Convert to C String
    v8::String::Utf8Value lang(args[1]);
    v8::String::Utf8Value enc(args[2]);
    const char * strLang = (args.Length() > 1) ? *lang : "english";
    const char * strEnc = (args.Length() > 2) ? *enc : "UTF_8";

    struct sb_stemmer * stemmer = stemmer = sb_stemmer_new(strLang, strEnc);

    if (args[0]->IsArray()) {

        v8::Handle<v8::Array> strArray = v8::Handle<v8::Array>::Cast(args[0]);
        int strArrayLength = strArray->Length();

        v8::Local<v8::Array> arrayResult = v8::Array::New(strArrayLength);
        for (int i = 0; i < strArrayLength; i++) {

            // Convert to C String
            v8::String::Utf8Value str(strArray->Get(i));
            strValue = *str;

            stemmed = sb_stemmer_stem(
                stemmer,                     // Use exising instance
                (unsigned char *)(strValue), // Convert to "unsigned char *"
                strlen(strValue)             // Get length
            );

            arrayResult->Set(v8::Number::New(i), v8::String::New((char *)(stemmed)));
        }

        sb_stemmer_delete(stemmer);

        return scope.Close(arrayResult);

    } else {

        // Convert to C String
        v8::String::Utf8Value str(args[0]);
        strValue = (args.Length() > 0) ? *str : "";

        stemmed = sb_stemmer_stem(
            stemmer,                     // Use exising instance
            (unsigned char *)(strValue), // Convert to "unsigned char *"
            strlen(strValue)             // Get length
        );

        v8::Handle<v8::String> strResult = v8::String::New((char *)(stemmed));

        sb_stemmer_delete(stemmer);

        return scope.Close(strResult);
    }
}

void Init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("stemword"),
      FunctionTemplate::New(Stemword)->GetFunction());
}

NODE_MODULE(snowball, Init)