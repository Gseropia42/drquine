#include <stdio.h>
#define LOL "#include <stdio.h>%c#define LOL %c%s%c%c#define Pouet() ({FILE *f = fopen(%cGrace_Kid.c%c, %cwab+%c);fprintf(f, LOL, 10, 34, LOL, 34, 10, 34, 34, 34, 34, 10, 10, 10);0;})%c#define test main%cint test(){Pouet();}%c"
#define Pouet() ({FILE *f = fopen("Grace_Kid.c", "wab+");fprintf(f, LOL, 10, 34, LOL, 34, 10, 34, 34, 34, 34, 10, 10, 10);0;})
#define test main
int test(){Pouet();}
