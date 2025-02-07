#include <stdio.h>

int main() {
	int a, b;
	double c, result;
	
	a = 1;
	b = 2;
	c = 10.5;
	result = a + (b * c);
	
	printf("Hello world!\n");
	printf("The result is %lf. The value of a is %d.", result, a);
	
	return(0);
}
