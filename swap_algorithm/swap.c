#include <stdio.h>
#include "../c_functions.h"

//Function parameter passing by reference in action
int main(void) {
	int a, b, c, d;

		for (int i = 1; i <= 4; i++) {

			//The switch conditional statement.
			switch (i) {
				//without the break keyword, the conditional control flow "falls through".
				case 1:
					printf("Please, enter an integer: ");
					scanf("%d", &a);
					break;
				
				case 2: 
					printf("\nPlease, enter another integer: ");
					scanf("%d", &b);
					break;
					
				case 3: 
					printf("\nPlease, enter another integer: ");
					scanf("%d", &c);
					break;

				case 4: 
					printf("\nPlease, enter another integer: ");
					scanf("%d", &d);
					putchar('\n');
					break;

				default: 
					printf("\nPlease, checkout for what is wrong\n");

			}
		}

	printf("\"Input data before the swap_function is invoked\" a: %d b: %d c: %d d: %d\n\n", a, b, c, d);

	/* swap_function parameter passing by reference. Here, memory addresses are passed into the swap_function parameter pointer 
	   variables. */
	swap_function(&a, &b, &c, &d);
	
	/* This shows that the swap_function parameter passing by reference actually changed the values of the integer variables in the 
	   global scope. This was made possible through the passing of memory addresses into the integer swap_function parameter pointer
	   variables instead of just the copy of the variable values. */
	printf("\"Output data after the swap_function is invoked\" a: %d b: %d c: %d d: %d\n\n", a, b, c, d);

	return 0;
}
