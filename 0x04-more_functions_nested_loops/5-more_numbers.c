#include "main.h"

/**
 * more_numbers - print nums from 0 to 14, 10 times
 *
 * Return: 0
*/

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar(b + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
