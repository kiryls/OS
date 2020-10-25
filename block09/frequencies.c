/* Provare il contatore di frequenze usando come input non la tastiera ma i file allegati agli esercizi di nome "The_Shadow_Line.txt" e "Dubliners.txt".
 * Linea di comando da fornire:
 *     frequencies < The_Shadow_Line.txt 
 * Riprovare sul testo "Dubliners.txt" con il comando:
 *     frequencies < Dubliners.txt 
 * Cosa si osserva?
 */

#include <stdio.h>

#define HISTOGRAM_MAXHEIGHT 40
#define NO_LETTERS ('Z' - 'A' + 1)
#define is_whitespace(c) ((c) == ' ' || (c) == '\b' || (c) == '\n' || (c) == '\r' || (c) == '\t')

char tolowercase(char c)
{
    return c <= 'Z' && c >= 'A' ? c - 'A' + 'a' : c;
}

int max(unsigned int * a, int n) {
    // cond: n>0
    int i;
    int max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}

void set(unsigned int a[], int n, unsigned int val) {
    int i;
    for (i = 0; i < n; i++)
        a[i] = val;
}

int main(int argc, char *argv[]) {
    unsigned int cnts[NO_LETTERS];     // array per contare le occorrenze dei singoli caratteri
                                       // dell'alfabeto senza distinzione sullo stile
    unsigned int wspaces = 0;          // conta gli spazi bianchi
    unsigned int total_c = 0;          // conta i caratteri totali
    unsigned int total_alphabetic = 0; // conta i caratteri totali dell'alafabeto
    int c;

    set(cnts, NO_LETTERS, 0);

    c = getchar();
    while (c != EOF)
    {
        c = tolowercase((char)c);
        if (c <= 'z' && c >= 'a')
        {
            cnts[c - 'a'] += 1;
            total_alphabetic += 1;
        }
        else if (is_whitespace(c))
            wspaces += 1;

        total_c++;

        c = getchar();
    }

    if (total_c != 0) {
        // usando come mattoncino elementare il carattere *, voglio stampare un istogramma
        // orientato orizzontalmente delle frequenze dei soli caratteri dell'alfabeto,
        // allora ho bisogno di determinare il carattere con conteggio massimo ed assegnare ad esso
        // 40 mattoncini (massima altezza istogramma)

        // frequenza del carattere dell'alfabeto che occorre maggiormente
        float ratio_max = (float)max(cnts, NO_LETTERS) / total_c;

        // frequenza del generico carattere dell'alfabeto considerato al passo corrente dell'algoritmo
        float ratio;
        for (int i = 0; i < NO_LETTERS; i++) {
            ratio = (float)cnts[i] / total_c;
            // stampa il carattere e la percentuale sul totale dei caratteri
            printf("'%c' %2.0f%%   ", 'a' + i, ratio * 100);
            // stampa un istogramma orizzontale di altezza proporzionale alla frequenza
            int l = (int)(ratio / ratio_max * HISTOGRAM_MAXHEIGHT);
            for (int j = 0; j < l; j++)
                printf("*");
            printf("\n");
        }

        printf("wspaces %2.0f%%\n", wspaces * 100. / total_c);
        printf("others  %2.0f%%\n", (total_c - wspaces - total_alphabetic) * 100. / total_c);
    }
}
