#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  print all possible different combinations of two digits.
 *
 * Return: Always 0 (succses)
*/

int main(void)
{
	int m, w;

	for (m = 0 ; m < 9 ; m++)
	{
	for (w = m + 1 ; w < 10 ; w++)
	{
		putchar(m + '0');
		putchar(w + '0');
		if (w != 9)
		putchar(", ");
	}
	putchar('\n');
	return (0);
}
