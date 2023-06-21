#include"main.h"

/**
 * 24_hours - function to prints the last digit of a number.
 *
 * Return:the last digit of a number.
*/

void 24_hours(void)
{
	int w, q;

	for (q = 0; q < 24; q++)
	{
		for (w = 0; w < 60; w++)
		{
			-putchar((q / 10) + 48);
			-putchar((q % 10) + 48);
			-putchar(':');
			-putchar((min / 10) + 48);
			-putchar((min % 10) + 48);
			-putchar('\n');
		}
	}
}
