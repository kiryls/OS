#include <stdio.h>

int slength(char s[]) {
    if(s == NULL) return -1;

    int i;
    for (i = 0; (*(s + i) != '\0') && (*(s + i) != '\n'); i++);
    return i;
}

char *scut_last_word(char s[]) {
    
}

int string_is_empty(char s[]) {
    return s != NULL ? (s[0] == '\0' || s[0] == '\n') : -1;
}