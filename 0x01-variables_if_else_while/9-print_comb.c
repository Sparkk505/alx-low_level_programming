#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (succses)
*/

int main(void)
{
	int m = 0;

	while (m < 10)
	{
		putchar(m + '0');
		putchar(", ");
		m++;
	}
	putchar('\n');
	return (0);
}

