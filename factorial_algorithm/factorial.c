#include <stdio.h>
#include "../c_functions.h"

int main(void) {
	int intake;
	
	puts("Factorial for numbers; 1 - 31");
	printf("Please, enter a number: ");
	scanf("%d", &intake);

	printf("The factorial for the number, %d is = %d\n", intake, factorial(intake));

	return 0;
}

