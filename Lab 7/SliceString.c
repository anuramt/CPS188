#include <stdio.h>
#include <string.h>

#define SIZE 100

void sliceString(char before[], char after[], int start, int end);


int main() {
	char original[SIZE], sliced[SIZE];
	int startIndex, endIndex;
	
	printf("Please enter a string: ");
	fgets(original, SIZE, stdin);
	
	original[strlen(original) - 1] = '\0'; // remove newline
	
	printf("Enter the start index for the slice (inclusive): ");
	scanf(" %d", &startIndex);
	
	printf("Enter the end index for the slice (inclusive): ");
	scanf(" %d", &endIndex);
	
	printf("BEFORE: %s\n", original);
	sliceString(original, sliced, startIndex, endIndex);
	printf("AFTER: %s\n", sliced);

	return(0);
}


/* Slice a string from the start index to the end index, both inclusive. */
void sliceString(char before[], char after[], int start, int end) {
	int j = 0;
	
	for (int i = start; i <= end; i++) {
		after[j] = before[i];
		j++;
	}
	
	after[j] = '\0';
}
