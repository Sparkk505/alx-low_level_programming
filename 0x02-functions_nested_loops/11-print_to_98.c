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
		for (w = a; w < 98; w++)
		{
			printf("%d, ", w);
		}
	}
	else if (a > 98)
	{
		for (w = a; w > 98; w--)
		{
			printf("%d, ", w);
		}
	}
	printf("98\n");
}
