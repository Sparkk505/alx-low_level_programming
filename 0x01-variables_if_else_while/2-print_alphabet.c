#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (succses)
*/

int main(void)
{
	char ch = 'a';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
