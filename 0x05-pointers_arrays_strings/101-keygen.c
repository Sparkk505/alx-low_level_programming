#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates rand pass
 * Return: zero
*/

int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	purchar(2772 - s);
	return (0);
}
