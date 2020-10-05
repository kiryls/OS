#include <stdio.h>
#include <string.h>

#define EXP_BITS 11
#define MANTISSA_BITS 52
#define EXCESS 1023

int main(int argc, char const *argv[]) {
    unsigned long long mask = 0x8000000000000000;
    unsigned long long sign = 0x7FFFFFFFFFFFFFFF; 
    double dee;
    unsigned long long daa;

    printf("%s", "Inserisci un double: ");
    scanf("%lf", &dee);

    memcpy(&daa, &dee, 8);

    if(mask & daa) daa &= sign;
    daa >>= MANTISSA_BITS;

    unsigned long long daa = (unsigned long long)dee;
    printf("%s%llu\n", "L'esponente e': ", daa - EXCESS);

    return 0;
}

