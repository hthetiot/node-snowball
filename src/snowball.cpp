#include <node.h>
#include <v8.h>
#include "libstemmer/include/libstemmer.h"
#include "libstemmer/runtime/header.h"

using namespace v8;

// Returns the Nth number in the fibonacci sequence where N is the first
// argument passed.
Handle<Value> Stemword(const Arguments& args) {
    HandleScope scope;

    // Check that there are enough arguments. If we access an index that doesn't
    // exist, it'll be Undefined().
    if (args.Length() < 1) {
        // No argument was passed. Throw an exception to alert the user to
        // incorrect usage. Alternatively, we could just use 0.
        return ThrowException(
            Exception::TypeError(String::New("First argument must be a string"))
        );
    }

    // Cast a value to a specific type. See
    // http://izs.me/v8-docs/classv8_1_1Value.html for available To*() functions
    // and type checking functions. When converting to integer, make sure the
    // POD type you use is big enough!
    //v8::String::Utf8Value strObj(args[0]->ToString());
    // http://snowball.tartarus.org/algorithms/english/stemmer.html
    // http://snowball.tartarus.org/algorithms/english/stemmer.html

    // get the param
    //v8::Local<v8::String> strObj = args[0]->ToString();
    v8::String::Utf8Value arg0(args[0]);
    v8::String::Utf8Value arg1(args[1]);
    v8::String::Utf8Value arg2(args[2]);

    // convert it to string
    const char * data = (args.Length() > 0) ? *arg0 : "";
    const unsigned char * strValue = (unsigned char *)(data);
    const int strLength = sizeof(data);
    
    const char * strLang = (args.Length() > 1) ? *arg1 : "english";
    const char * strEnc = (args.Length() > 2) ? *arg2 : "UTF_8";

    struct sb_stemmer * stemmer = stemmer = sb_stemmer_new(strLang, strEnc);
    const unsigned char * stemmed = sb_stemmer_stem(stemmer, strValue, strLength);
    const char * stemmedValue = (char *)(stemmed);

    sb_stemmer_delete(stemmer);

    return scope.Close(String::New(stemmedValue));
}


void RegisterModule(Handle<Object> target) {
    target->Set(String::NewSymbol("stemword"),
        FunctionTemplate::New(Stemword)->GetFunction());
}

NODE_MODULE(snowball, RegisterModule);
