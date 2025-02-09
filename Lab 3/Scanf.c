#include <stdio.h>

int main() {
    int age;
    char first_initial;
    float height;
    
    printf("What is your age? ");
    scanf("%d", &age);
    
    printf("What is the initial of your first name? ");
    scanf(" %c", &first_initial);
    
    printf("What is your height in meters? ");
	scanf(" %f", &height);
	
	printf("Age: %d years old, First Initial: %c, Height: %.2fm", age, first_initial, height);

    return 0;
}