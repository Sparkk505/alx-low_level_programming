#include "main.h"

/**
 * print_array - print
 *
 * @n: elements
 * @a: string
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		if (w != (n - 1))
			printf("%d, ", a[w]);
		else
			printf("%d", a[w]);
	}
	printf("\n");
}
