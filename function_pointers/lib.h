#include "lib.c"

#define __RED "\e[1;31m"
#define __BOLD "\e[1m"
#define __ITALIC "\e[3m"
#define __UNDERLINE "\e[4m"
#define ENDSTYLE "\e[m"
#define ERROR(message) printf("%s%s%s", __RED, message, ENDSTYLE);
#define BOLD(txt) {printf(__BOLD); printf(txt); printf(ENDSTYLE);}
#define ITALIC(txt) {printf(__ITALIC); printf(txt); printf(ENDSTYLE);}
#define UNDERLINE(txt) {printf(__UNDERLINE); printf(txt); printf(ENDSTYLE);}


int add (int, int);
int sub (int, int);
int mul (int, int);
int div (int, int);
int mod (int, int);