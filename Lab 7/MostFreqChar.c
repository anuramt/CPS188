#include <stdio.h>
#include <string.h>

#define SIZE 100

void mostFreqChar(char str[], char* freqChar, int* freqCount);


int main() {
	char string[SIZE];
	char freqChar;
	int freqCount;
	
	printf("Please enter a string: ");
	fgets(string, SIZE, stdin);
	
	printf("Length: %d\n", (int)strlen(string));
	string[strlen(string) - 1] = '\0';
	printf("Length: %d\n", (int)strlen(string));
	
	printf("%s\n", string);
	
	mostFreqChar(string, &freqChar, &freqCount);
	
	printf("The most frequent character was %c, and its frequency was %d.", freqChar, freqCount);

	return(0);
}


void mostFreqChar(char str[], char* freqChar, int* freqCount) {
	int count[94];
	int charIndex;
	
	// Initialize each element in the count array to 0
	for (int i = 0; i < 94; i++) {
		count[i] = 0;
	}
	
	// Increasing the count of the character based on charIndex
	for (int i = 0; i < (int)strlen(str); i++) {
		// Map the ASCII decimal value of 33 to 126 (for ! to ~) using the indices 0 to 93
		charIndex = (int)str[i] - 33;		
		count[charIndex] += 1;
	}
	
	// Print the frequency of each character in the string, if the character exists
	for (int i = 0; i < 94; i++) {
		if (count[i] > 0) {
			printf("%c: %d\n", (char)(i + 33), count[i]);
		}
	}
	
	// Find and update the most frequent character and its count
	for (int i = 0; i < 94; i++) {
		if (count[i] > *freqCount) {
			*freqChar = (char)(i + 33);
			*freqCount = count[i];
		}
	}
}
