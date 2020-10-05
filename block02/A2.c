#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 0;
    int tot = 0;
    int tmp;

    printf("%s", "Inserisci sequenza: ");

    while(scanf("%d", &tmp) && tmp > 0) {
        tot += tmp;
        count++;
    }    

    printf("%s%G\n", "Il valore della media e': ", (float)tot/count);

    return 0;
}
