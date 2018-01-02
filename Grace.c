#include <stdio.h>
#define TEXT "#include <stdio.h>%c#define TEXT %c%s%c%c#define QUEEN() ({FILE *f = fopen(%cGrace_Kid.c%c, %cwab+%c);fprintf(f, TEXT, 10, 34, TEXT, 34, 10, 34, 34, 34, 34, 10, 10, 10, 10);0;})%c#define FAKEMAIN() int main(){QUEEN();}%c/* This is not a comment */%cFAKEMAIN()%c"
#define QUEEN() ({FILE *f = fopen("Grace_Kid.c", "wab+");fprintf(f, TEXT, 10, 34, TEXT, 34, 10, 34, 34, 34, 34, 10, 10, 10, 10);0;})
#define FAKEMAIN() int main(){QUEEN();}
/* This is not a comment */
FAKEMAIN()
