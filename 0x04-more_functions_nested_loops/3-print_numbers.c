#include "main.h"

/**
 * print_numbers - print nums from 0 to 9
 *
 *
 * Return: 0
*/

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + 48);
	}
	_putchar('\n');
}
