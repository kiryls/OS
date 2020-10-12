#include <stdio.h>

#define N 1024

int slength(char s[]) {
    int i;
    for (i = 0; (*(s + i) != '\0') && (*(s + i) != '\n'); i++);
    return i;
}

char * scut_last_word (char s[]) {
    int i;
    for(i = slength(s); i > 0 && *(s+i) != ' '; i--);
    s[i] = '\0';
    return s;
}

int string_is_empty(char s[]) {
    return *s == '\n' || *s == '\0';
}

int main(int argc, char const *argv[]) { 
    char t[N];
    fgets(t, N, stdin);

    printf("len: %d\n", slength(t));
    printf("prima: %s", t);
    printf("dopo: %s\n", scut_last_word(t));

    return 0;
}
