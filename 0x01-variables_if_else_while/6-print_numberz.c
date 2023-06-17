#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints 0-9 using putchar
 *		while using int variable
 *
 * Return: Always 0 (succses)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
