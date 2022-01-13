#include <stdio.h>
int foo(int a, int b);

int main(){
	printf("Hello world!\n");
	int a = 2;
	int b = 3;
	int f = foo(a, b);
	printf("Somma di %i e %i = %i\n", a, b, f);
	return 0;
}
