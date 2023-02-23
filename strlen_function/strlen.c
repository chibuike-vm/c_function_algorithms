#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Program Entry Point.
 *
 * Description: This Function is the program's entry point and it basically
 * calculates the string length characters entered by a user and then prints
 * the value to the console.
 *
 * Return: This function returns the zero exit status upon successful
 * execution.
 */
int main(void)
{
	char i, strLenCounter = 0;
	char *strInputPtr = (char *)malloc(100 * sizeof(int));

	printf("\nPlease, enter a string of not more than 20 characters with no\n");
	printf("spaces in between any of the characters: ");
	scanf("%s", strInputPtr);

	for (i = 0; strInputPtr[i] >= '\0'; i++)
	{
		strLenCounter++;

		if (strInputPtr[i] == '\0')
		{
			break;
		}
	}
	int sLen = strlen(strInputPtr);

	putchar('\n');
	printf("String length by the standard library strlen function: %d\n\n", sLen);

	strLenCounter--;
	printf("String length by @chibuke-vm (GITHUB USERNAME): %d\n", strLenCounter);
	putchar('\n');

	free(strInputPtr);
	return (0);
}
