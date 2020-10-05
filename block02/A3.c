#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;

    printf("%s", "Inserisci un carattere: ");
    scanf("%c", &c);

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%s\n", "E' un carattere alfabetico");  

    else if(c >= '0' && c <= '9')
        printf("%s\n", "E' un carattere numerico"); 

    else
        printf("%s\n", "E' un altro carattere");   
        
    return 0;
}
