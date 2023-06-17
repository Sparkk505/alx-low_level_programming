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

	for (m = 0 ; m < 8 ; m++)
	{
	for (w = m + 1 ; w < 9 ; w++)
	{
	for (z = w + 1 ; z < 10 ; z++)
	{
		putchar(m + '0');
		putchar(w + '0');
		putchar(z + '0');
		if (m != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
