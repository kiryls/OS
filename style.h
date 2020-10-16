#define __RED "\e[31m"
#define __BOLD "\e[1m"
#define __ITALIC "\e[3m"
#define __UNDERLINE "\e[4m"
#define ENDSTYLE "\e[m"
#define ERROR(message) printf("%sERROR: %s%s", __RED, message, ENDSTYLE);
#define BOLD(txt) {printf(__BOLD); printf(txt); printf(ENDSTYLE);}
#define ITALIC(txt) {printf(__ITALIC); printf(txt); printf(ENDSTYLE);}
#define UNDERLINE(txt) {printf(__UNDERLINE); printf(txt); printf(ENDSTYLE);}
#define RED(txt) {printf(__RED); printf(txt); printf(ENDSTYLE);}