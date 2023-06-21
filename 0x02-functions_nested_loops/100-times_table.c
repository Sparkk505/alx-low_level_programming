#include"main.h"

/**
 * print_times_table - prints all natural numbers from n to 98
 *
 * @n: number input
 *
*/

void print_times_table(int n)
{
	int p, m, u;

	if (n <= 1 && n >= 0)
	{
		for (u = 0; u <= n; ++u)
		{
			_putchar(48);
			for (m = 1; m <= n; ++m)
			{
				_putchar(',');
				_putchar(' ');

				p = u * m;

				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				} else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
