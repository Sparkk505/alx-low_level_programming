#include"main.h"

/**
 * print _sign - function to check if the number sign
 *
 * @n: takes n
 *
 * Return: the num sign
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
