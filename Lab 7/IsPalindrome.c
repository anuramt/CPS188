#include <stdio.h>
#include <string.h>

#define SIZE 100

int isPalindrome(char str[], int i);


int main() {
	char string[SIZE];
	int result = 0;
	
	printf("Please enter a string: ");
	fgets(string, SIZE, stdin);
	
	string[strlen(string) - 1] = '\0'; 	// remove newline
	printf("%s\n", string);
	
	result = isPalindrome(string, 0);
	
	switch (result) {
		case -1:
			printf("Not a palindrome!");
			break;
			
		case 1:
			printf("Is a palindrome!");
			break;
			
		default:
			printf("Error!");
			break;
	}

	return(0);
}


/* Returns 1 if the string is a palindrome, -1 if not. */

/* 
Example 1: racecar
   
0 1 2 3 4 5 6
r a c e c a r

i = 0, j = 7 - 1 - 0 = 6, comparing r to r
i = 1, j = 7 - 1 - 1 = 5, comparing a to a
i = 2, j = 7 - 1 - 2 = 4, comparing c to c
i = 3, j = 7 - 1 - 3 = 3, comparing e to e
i = 4, j = 7 - 1 - 4 = 2, i > j, stop recursion (return 1)
*/

/* 
Example 2: pulp
   
0 1 2 3
p r e p

i = 0, j = 4 - 1 - 0 = 4, comparing p to p
i = 1, j = 4 - 1 - 1 = 2, comparing r to e, stop recursion (return -1)
*/

int isPalindrome(char str[], int i) {
	int j = strlen(str) - 1 - i;
	
	if (i > j) {
		return 1;
	}
	else if (str[i] != str[j]) {
		return -1;
	}
	else {
		return isPalindrome(str, i + 1);
	}
	
	return 0;
}
