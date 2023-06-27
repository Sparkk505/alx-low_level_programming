#include "main.h"

/**
 * *_strcpy - print
 *
 * @dest: elements
 * @src: string
 *
 * Return: is
 */

void *_strcpy(char *dest, char *src)
{
	int w = -1;

	do {
		w++;
		dest[w] = src[w];
	} while (src[w] != '\0');

	return (dest);
}
