#include <stdio.h>
#include "string_utilities.h"

int main(int argc, char const *argv[]) {
    
    char * s0 = "nel mezzo del cammin di nostra vita";
    char * s1 = "we we we";
    char * s2 = "we we we";
    char * s4 = "LOL";
    char * empty = "";
    char * snull = NULL;
    char c = 'z';

    printf("\"%s\" e' lunga %d\n", s0, slength(s0));
    printf("\n");
    printf("original: \"%s\"\nmodified: \"%s\"\n", s0, scut_last_word(s0));
    printf("\n");
    printf("string_is_empty(\"%s\") = %d\n", s4, string_is_empty(s4));
    printf("string_is_empty(\"%s\") = %d\n", snull, string_is_empty(snull));
    printf("string_is_empty(\"%s\") = %d\n", empty, string_is_empty(empty));
    printf("\n");
    printf("is \"%s\" palindrome? %s\n", s4, string_is_palindrome(s4) ? "YES" : "NOPE");
    printf("\n");
    printf("\"%s\" == \"%s\" ? %s\n", s1, s2, !string_compare(s1, s2) ? "YES" : "NOPE");
    printf("\n");
    printf("original: \"%s\"\nmodified: \"", s0);
    string_wipe_whitespaces(s0);
    printf("\"\n");
    printf("\n");
    printf("how many '%c' in \"%s\" ? %d\n", c, s0, string_how_many(c, s0));
    
    return 0;
}
