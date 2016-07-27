#include <stdio.h>
#include <iostream>
void b(){}
/*
	a
*/
int main(){
/*
	a
*/
b();std::string s = "#include <stdio.h>%c#include <iostream>%cvoid b(){}%c/*%c%ca%c*/%cint main(){%c/*%c%ca%c*/%cb();std::string s = %c%s%c;const char * c = s.c_str();printf(c,10,10,10,10,9,10,10,10,10,9,10,10,34,c,34);}";const char * c = s.c_str();printf(c,10,10,10,10,9,10,10,10,10,9,10,10,34,c,34);}