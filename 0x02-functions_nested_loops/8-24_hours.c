#include"main.h"

/**
 * m24_hours - function to prints the last digit of a number.
 *
 * Return:the last digit of a number.
*/

void m24_hours(void)
{
	int w, q;

	for (q = 0; q < 24; q++)
	{
		for (w = 0; w < 60; w++)
		{
			_putchar((q / 10) + 48);
			_putchar((q % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
