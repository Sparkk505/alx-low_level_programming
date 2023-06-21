#include"main.h"

/**
 * jack_bauer - function to prints the last digit of a number.
 *
 * Return:the last digit of a number.
*/

void jack_bauer(void)
{
	int w, q;

	for (q = 0; q < 24; q++)
	{
		for (w = 0; w < 60; w++)
		{
			_putchar((q / 10) + 48);
			_putchar((q % 10) + 48);
			_putchar(':');
			_putchar((w / 10) + 48);
			_putchar((w % 10) + 48);
			_putchar('\n');
		}
	}
}
