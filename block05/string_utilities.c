#include <stdio.h>

int slength(char s[]) {
    if(s == NULL) return -1;

    int i;
    for (i = 0; (*(s + i) != '\0') && (*(s + i) != '\n'); i++);
    return i;
}

char * scut_last_word(char s[]) {
    int i;
    for (i = slength(s); i > 0 && *(s + i) != ' '; i--);
    s[i] = '\0';
    return s;
}

int string_is_empty(char s[]) {
    return s != NULL ? (s[0] == '\0' || s[0] == '\n') : -1;
}

int string_is_palindrome(char s[]) {
    if(s == NULL) return 0;

    int len = slength(s);

    if(len <= 1) return 1;

    int i = 0;
    int j = len - 1;

    while(i < len/2) {
        if(s[i] != s[j]) return 0;
        i++; j--; 
    }

    return 1;
}

int string_compare(char s1[], char s2[]) {
    while (*s1 && (*s1 == *s2)) 
        s1++, s2++;
    return (*s2) - (*s1);
}

// void string_wipe_whitespaces(char s[]);

// int string_how_many(char c, char s[]);