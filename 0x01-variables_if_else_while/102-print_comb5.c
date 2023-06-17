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
	int f = 0, s;

	while (f <= 99)
	{
		s = f;
		while (s <= 99)
		{
			if (s != f)
			{
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);

				if (f != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
