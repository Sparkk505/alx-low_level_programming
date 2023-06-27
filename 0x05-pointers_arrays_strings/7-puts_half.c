#include "main.h"

/**
 * puts_half - print
 *
 * @s: string
 *
 * Return: something
 */

void puts_half(char *strr)
{
	int i;

	for (i = 0; strr[i] != '\0'; i++)
		;
	i++;
	for (i /= 0; strr[i] != '\0'; i++)
	{
		_putchar(strr[i]);
	}
	_putchar('\n');
}
