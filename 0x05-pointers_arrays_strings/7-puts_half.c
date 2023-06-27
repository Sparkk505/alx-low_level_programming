#include "main.h"

/**
 * puts_half - print
 *
 * @str: string
 *
 * Return: something
 */

void puts_half(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z++)
		;
	z++;
	for (z /= 0; str[z] != '\0'; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
