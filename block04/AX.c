#include <stdio.h>

#define N 1024
#define BB "\033[1m"
#define NB "\033[0m"

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
    

    printf("Insert string: ");
    fgets(t, N, stdin);

    printf("Original: %s", t);
    printf("Size: %d\n", slength(t));
    printf("Empty: %s\n", string_is_empty(t)?"true":"false");
    printf("Trimmed: %s\n", scut_last_word(t));
    printf("Empty: %s\n", string_is_empty(t)?"true":"false");

    return 0;
}

