#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define START 1
#define END 100

void fillArray(int* arr, int size, int start, int end);

int main() {
	int array[SIZE];
	
	fillArray(array, SIZE, START, END);
	
	for (int i = 0; i < SIZE; i++) {
		printf("%d", array[i]);
		
		if (i != SIZE - 1) {
		    printf(", ");
		}
	}
	
	return(0);
}

void fillArray(int* arr, int size, int start, int end) {
	srand(time(NULL));
	
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % (end - start + 1)) + start;
	}
}