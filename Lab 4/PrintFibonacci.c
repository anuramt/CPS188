#include <stdio.h>

void printFibonacci (int num);

int main() {
	int n;
	n = 0;
	
	do {
		printf("How many terms of the Fibonacci sequence to print?\n");
		printf("Please enter a non-negative and non-zero number: ");
		scanf(" %d", &n);
		printf("\n");

	} while (n <= 0);
	
	printFibonacci(n);
	
	return (0);
}

void printFibonacci (int num) {
	int term1 = 0, term2 = 1;
	int nextTerm = term1 + term2;
	
	if (num == 1) {
		printf("%d", term1);
	}
	else if (num >= 2) {
		printf("%d, %d, ", term1, term2);
	}
	
	for (int i = 3; i <= num; i++) {
		printf("%d, ", nextTerm);
		term1 = term2;
		term2 = nextTerm;
		nextTerm = term1 + term2;
	}
}