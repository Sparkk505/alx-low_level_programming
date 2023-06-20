#include"main.h"

/**
 * print_last_digit - function to prints the last digit of a number.
 *
 * @n: number to check
 *
 * Return:the last digit of a number.
*/

int print_last_digit(int n)
{
	int lastd;

	if (n < 0)
		lastd = -1 * (n % 10);
	else
		lastd = (n % 10);

	_putchar(lastd + '0');
	return (lastd);
}
