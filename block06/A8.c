#include <stdio.h>

#define N 256

void processa (char * s) {
    int cont = 0;
    int dentro = 0;

    for (int i = 0; s[i] != '\n' && s[i] != '\0'; i++) {
        if(dentro && s[i] == ' ') {
            printf("%d ", cont);
            dentro = 0, cont = 0;
        }
        if(s[i] != ' ') 
            cont++, dentro = 1;
    }
    if(dentro) printf("%d\n", cont);
    else printf("\n");
}

int main(int argc, char const *argv[]) {
    
    char s[N];
    printf("inserisci linea di testo: ");
    fgets(s, N, stdin);
    printf("> ");
    processa(s);

    return 0;
}

