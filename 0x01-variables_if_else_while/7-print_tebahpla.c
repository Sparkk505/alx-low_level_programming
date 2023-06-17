#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *		while using int variable
 *
 * Return: Always 0 (succses)
*/

int main(void)
{
	char w = 'z';

	while (w >= 'a')
	{
		putchar(w);
		w--;
	}
	putchar('\n');
	return (0);
}
