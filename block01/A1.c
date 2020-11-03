#include <stdio.h>

int main() {
    char * str = "Hello WoRLd! Today’s temperature is 34°C.\n";
    int mask = 'a' - 'A';
    char * c = str;
    int AZ;

    while(*c != '\0') {
        AZ = (*c <= 'Z' && *c >= 'A');
        printf("%c", AZ*(*c | mask) + !AZ*(*c));
        c++;
    }
    return 0;
}

