#include <stdio.h>
int foo(int a, int b);

int main(){
	printf("Test n.1\n");
	int a = 2;
	int b = 3;
	int f = foo(a, b);
	if (f != a+b) {
		printf("Errore!\n");
	} else {
		printf("Corretto!\n");
	}
	return 0;
}
