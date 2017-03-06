{
    "targets": [
        {
            "target_name": "snowball",
            "include_dirs" : [ 
                "<!(node -e \"require('nan')\")"
            ],
            "sources": [
                "src/snowball.cpp",
                "src/NativeExtension.cpp",
                "src/libstemmer/libstemmer/libstemmer.c",
                "src/libstemmer/runtime/api.c",
                "src/libstemmer/runtime/utilities.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_danish.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_dutch.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_english.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_finnish.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_french.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_german.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_hungarian.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_italian.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_norwegian.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_porter.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_portuguese.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_spanish.c",
                "src/libstemmer/src_c/stem_ISO_8859_1_swedish.c",
                "src/libstemmer/src_c/stem_ISO_8859_2_hungarian.c",
                "src/libstemmer/src_c/stem_ISO_8859_2_romanian.c",
                "src/libstemmer/src_c/stem_KOI8_R_russian.c",
                "src/libstemmer/src_c/stem_UTF_8_arabic.c",
                "src/libstemmer/src_c/stem_UTF_8_danish.c",
                "src/libstemmer/src_c/stem_UTF_8_dutch.c",
                "src/libstemmer/src_c/stem_UTF_8_english.c",
                "src/libstemmer/src_c/stem_UTF_8_finnish.c",
                "src/libstemmer/src_c/stem_UTF_8_french.c",
                "src/libstemmer/src_c/stem_UTF_8_german.c",
                "src/libstemmer/src_c/stem_UTF_8_hungarian.c",
                "src/libstemmer/src_c/stem_UTF_8_italian.c",
                "src/libstemmer/src_c/stem_UTF_8_norwegian.c",
                "src/libstemmer/src_c/stem_UTF_8_porter.c",
                "src/libstemmer/src_c/stem_UTF_8_portuguese.c",
                "src/libstemmer/src_c/stem_UTF_8_romanian.c",
                "src/libstemmer/src_c/stem_UTF_8_russian.c",
                "src/libstemmer/src_c/stem_UTF_8_spanish.c",
                "src/libstemmer/src_c/stem_UTF_8_swedish.c",
                "src/libstemmer/src_c/stem_UTF_8_tamil.c",
                "src/libstemmer/src_c/stem_UTF_8_turkish.c"
            ]
        }
    ]
}