#include <stdio.h>

int main(int argc, char const *argv[])
{
    char * str = "Hello WoRLd! Today’s temperature is 34°C.";
    char * ptr = str;
    int upper;

    while(*ptr != '\0') {
        upper = *ptr >= 'A' && *ptr <= 'Z';
        printf("%c", upper * (*ptr + 'a' - 'A') + !upper * (*ptr));
        ptr++;
    }

    return 0;
}
