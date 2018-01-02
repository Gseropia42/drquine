#include <stdio.h>
	/* This is a comment */
int main(){
	/* This is also a comment */
	char *a = "#include <stdio.h>%c%c/* This is a comment */%cint main(){%c%c/* This is also a comment */%c%cchar *a = %c%s%c;%c%cchar b = 10;%c%cchar c = 34;%c%cchar d = 9;%c%cprintf(a, b, d, b, b, d, b, d, c, a, c, b, d, b, d, b, d, b, d, b, b);%c}%c";
	char b = 10;
	char c = 34;
	char d = 9;
	printf(a, b, d, b, b, d, b, d, c, a, c, b, d, b, d, b, d, b, d, b, b);
}
