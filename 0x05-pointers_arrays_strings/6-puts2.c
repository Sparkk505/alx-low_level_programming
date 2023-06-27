#include "main.h"

/**
 * puts2 - print
 *
 * @s: string
 *
 * Return: nothing
 */

void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}
	_putchar('\n');
}
