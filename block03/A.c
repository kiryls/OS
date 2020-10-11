#include <stdio.h>
#define N 256

void contaCaratteri (int * abc) {
    char c = getchar();
    while (c != '\n') {
        abc[c]++;
        c = getchar();
    }
}

void printAlphabet (int * abc) {
    printf("\n");
    for(int i = 0; i < 'z' - ('a' - 1); i++) {
        printf("%c: ", 'a' + i);

        for(int j = 0; j < abc['a' + i] + abc['A' + i]; j++)
            printf("*");

        printf("\n");
    }
    
    printf("space: ");
    for (int j = 0; j < abc[' ']; j++) printf("*");
    printf("\n");
}

int main(int argc, char const *argv[]) {
    int abc[N] = {0};

    printf("Inserisci testo:\n>> ");
    contaCaratteri(abc);
    printAlphabet(abc);

    return 0;
}
