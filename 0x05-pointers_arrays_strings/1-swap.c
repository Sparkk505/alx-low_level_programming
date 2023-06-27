#include "main.h"

/**
 * swap_int - swap 2 int
 * @a: int 1
 * @b: int 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
