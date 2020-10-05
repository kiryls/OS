#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count;
    int tot = 0;
    int tmp;

    printf("%s", "Quanti voti? ");
    scanf("%d", &count);
    printf("%s", "Inserisci voti: ");

    for(int i = 0; i < count; i++) {
        scanf("%d", &tmp);
        tot += tmp;
    }

    printf("%s%G\n", "La media dei voti e': ", (float)tot/count);

    return 0;
}
