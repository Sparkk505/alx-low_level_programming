#include"main.h"

/**
 * times_table - function to prints the last digit of a number.
 *
*/

void times_table(void)
{
	int w, q, z;

	for (w = 0; w < 10; q++)
	{
		_putchar(48);
		for (q = 0; q < 60; w++)
		{
			_putchar(',');
			_putchar(' ');

			z = w * q;

			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + 48);

			_putchar((z % 10) + 48);
		}
		_putchar('\n');
	}
}

