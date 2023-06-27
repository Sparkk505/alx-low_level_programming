#include "main.h"

/**
 * puts_half - print
 *
 * @s: string
 *
 * Return: something
 */

void puts_half(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	i++;
	for (i /= 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
