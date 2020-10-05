#include <stdio.h>

int main(int argc, char const *argv[]) {
    unsigned x = 42;

    for(unsigned m = 1 << 31; m > 0; m >>= 1) 
        printf("%s", (x & m) ? "1" : "0");
    
    return 0;
}
