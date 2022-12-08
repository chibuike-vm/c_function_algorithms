/*
int change_temp(int *celcius) {
	*celcius = 300;
	int kelvin = *celcius + 273;
	return kelvin;
}
*/

int factorial(int number) {
//	printf("Please, enter a number: ");
//	scanf("%d", &number);

	int fct = 1;

	for (int i = 1; i < number; i++) {
		fct *= (number - i);	
	}

	int factorial_sum = (number * fct);

	return factorial_sum;
}

void swap_function(int *a, int *b, int *c, int *d) {
	int space_buffer = *a, hold_buffer = *c;
	*a = *b;
	*b = space_buffer; 
	*c = *d;
	*d = hold_buffer;
	printf("\"swap_function scope data output\" a : %d b: %d c: %d d: %d\n\n", *a, *b, *c, *d);
}


void result_declaration(int a, int b, int c) {
	if (a > b && a > c) {
		printf("\nHurray! Atiku with %d total votes is the winner of the election\n\n", a);
	} else if (b > a && b > c) {
		printf("\nHurray! Obi with %d total votes is the winner of the election\n\n", b);
	} else if (c > a && c > b) {
		printf("\nHurray! Tinubu with %d total votes is the winner of the election\n\n", c);
	} else {
		puts("Check the source code, something is wrong");
	}
}

