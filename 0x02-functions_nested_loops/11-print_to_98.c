#include"main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @a: number
 *
*/

void  print_to_98(int a)
{
	int w;

	if (a <	98)
	{
		for (w = a; w <= 98; w++)
		{
			_putchar(w + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (w = a; w >= 98; w--)
		{
			_putchar(w + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	printf("98\n");
}
