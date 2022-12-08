#include <stdio.h>
#include "../c_functions.h"

int main(void) {
	printf("This vote collation is between three contenders; Atiku, Peter Obi and Tinubu\n\n");
	int i, atiku, obi, tinubu, atiku_sum = 0, obi_sum = 0, tinubu_sum = 0;
	for (i = 1; i <= 12; i++) {
		if (i <= 4) {
			printf("Atiku's vote collation for the 4 regions; N, S, W and E: ");
			scanf("%d", &atiku);
			atiku_sum += atiku;
		} else if (i >= 5 && i <= 8) {
			if (i == 5) {
				putchar('\n');
			}
			printf("Obi's Vote collation for the 4 regions; N, S, W and E: ");
			scanf("%d", &obi);
			obi_sum += obi;
		} else if (i >= 9) {
			if (i == 9) {
				putchar('\n');
			}
			printf("Tinubu's Vote collation for the 4 regions; N, S, W and E: ");
			scanf("%d", &tinubu);
			tinubu_sum += tinubu;
		} else {
			puts("Something must have gone wrong");
		}
	}
	//printf("A_sum: %d O_sum: %d T_sum: %d\n", atiku_sum, obi_sum, tinubu_sum);

	// Function parameter passing by value in action.
	result_declaration(atiku_sum, obi_sum, tinubu_sum);

	return 0;
}
