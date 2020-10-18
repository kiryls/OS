#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int slength(char s[]) {
    if(s == NULL) return -1;

    int i;
    for (i = 0; (*(s + i) != '\0') && (*(s + i) != '\n'); i++);
    return i;
}

char * scut_last_word(char s[]) {
    int len = slength(s);
    char * t = malloc(len * sizeof(char));
    memcpy(t, s, len);
    int i;
    for (i = slength(t); i > 0 && *(t + i) != ' '; i--);
    t[i] = '\0';
    return t;
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

void string_wipe_whitespaces(char s[]) {
    if(s == NULL) {
        printf("%s\n", "NULL");
        return;
    }

    for(int i = 0; i < slength(s); i++) {
        if(s[i] == ' ' || s[i] == '\t') continue;
        printf("%c", s[i]);
    }
        
}

int string_how_many(char c, char s[]) {
    if(s == NULL) return 0;
    for(int i = 0, count = 0; 1; i++) {
        if(s[i] == '\n' || s[i] == '\0') return count;
        if(c == s[i]) count++;
    }
        

}