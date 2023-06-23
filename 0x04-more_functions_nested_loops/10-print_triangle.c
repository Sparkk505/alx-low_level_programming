#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size:  is the size of the triangle
*/

void print_triangle(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int i, j, z;

		for (i = 0; i < size; i++)
		{
			for (j = size - i ; j >= 0; j--)
			{
				putchar(' ');
			}
			for (z = 0; z <= i; z++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
