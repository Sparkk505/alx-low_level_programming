#include "main.h"

/**
 * rev_string - print
 *
 * @s: string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int w, z;
	char t;

	for (w = 0; s[w] != '\0'; ++w)
		;

	for (z = 0; z < w / 2; z++)
	{
		temp = s[z];
		s[z] = s[w - 1 - z];
		s[w - 1 - z] = temp;
	}
}
