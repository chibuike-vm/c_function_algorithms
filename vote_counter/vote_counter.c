#include <stdio.h>
#include "../c_functions.h"

int main(void) {
	printf("This vote collation is between three contenders; Atiku, Obi\n");
	printf("and Tinubu.\n\n");
	int atiku, obi, tinubu, atiku_sum, obi_sum, tinubu_sum;

	atiku_sum = election_counter(atiku, 0);
	obi_sum = election_counter(obi, 1);
	tinubu_sum = election_counter(tinubu, 2);

	/* Function parameter passing by value in action. */
	result_declaration(atiku_sum, obi_sum, tinubu_sum);

	return 0;
}
