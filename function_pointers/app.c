#include <stdio.h>
#include "lib.h"

int main(int argc, char const *argv[]) {
    
    int (*fp)(int, int);

    // printf("Write expression <NUM> <OP> <NUM>: ");
    UNDERLINE("Write expression <NUM> <OP> <NUM>: ");
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
    case '+':
        fp = add;
        break;
    case '-':
        fp = sub;
        break;
    case '*':
        fp = mul;
        break;
    case '/':
        fp = div;
        break;
    case '%':
        fp = mod;
        break;
    
    default:
        // fprintf(stderr, "%soperation %c is not supported%s\n", ERR, op, ENDSTYLE);
        ERROR("operazione non supportata\n");
        return 420;
    }

    printf("Result of (%d) %c (%d) = %d\n", a, op, b, fp(a, b));

    return 0;
}