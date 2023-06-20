#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *  the alphabet a - z 10 times
*/

void print_alphabet(void)
{
	int ch, i;

	for (i = 0; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		-putchar('\n');
	}
}
