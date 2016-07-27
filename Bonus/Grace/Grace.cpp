#include <stdio.h>
#include <iostream>
#define A "#include <stdio.h>%c#include <iostream>%c#define A %c%s%c%c#define B int main(){FILE* fp;fp=fopen(%cGrace_kid.c%c,%cw%c);fprintf(fp,A,10,10,34,A,34,10,34,34,34,34,10,10,10,9,10,10);}%c#define C 1%c/*%c%ct%c*/%cB"
#define B int main(){FILE* fp;fp=fopen("Grace_kid.c","w");fprintf(fp,A,10,10,34,A,34,10,34,34,34,34,10,10,10,9,10,10);}
#define C 1
/*
	t
*/
B