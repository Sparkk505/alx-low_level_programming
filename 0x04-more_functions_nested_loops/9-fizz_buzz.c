#include "main.h"

/**
 * main - print num 1 - 100
 * 	numvers
 *
 * Return: always 0
*/

void main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
