#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (succses)
*/

int main(void)
{
	int m, w, z, y;

	for (m = 0 ; m < 7 ; m++)
	{
	for (w = 0 ; w < 8 ; w++)
	{
	for (z = m ; z < 9; z++)
	{
	for (y = w ; y < 10 ; y++)
	{
		if (m != 0 && w != 0 && z != 0 && y != 0)
		{
			putchar(m + '0');
			putchar(w + '0');
			putchar(' ');
			putchar(z + '0');
			putchar(y + '0');
			if (w != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}	
	}
	}
	}
	putchar('\n');
	return (0);
}
