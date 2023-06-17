#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit numbers
 *
 * Return: Always 0 (succses)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
