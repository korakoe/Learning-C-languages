#include <stdio.h>

int main() {

	// variables
	// here are some variable resources
	// https://cheatography.com/ashlyn-black/cheat-sheets/c-reference/

	int number1;
	int number2;

	// get values
	printf("Enter Number 1: ");
	scanf_s("%d", &number1);
	printf("Enter Number 2: ");
	scanf_s("%d", &number2);

	// add values together
	int sum = number1 + number2;

	// print result
	printf("Sum = %d \n", sum );
	
	// check if lower than 10
	if (sum < 10) {
		printf("sum is lower than 10");
	}
	else {
		printf("sum is higher than 10");
	}
	
}