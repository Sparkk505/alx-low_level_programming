#include "main.h"

/**
 * print_array - print
 *
 * @w: elements
 * @a: string
 *
 * Return: nothing
 */

void print_array(int *a, int w)
{
	int i;

	for (i = 0; i < w; i++)
	{
		if (i != (w - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}
