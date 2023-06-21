#include"main.h"

/**
 * main - entry
 *
 * Description: number input
 *
 * Return: always 0
*/

int main(void)
{
	float ts;
	unsigned long f1 = 0, f2 = 1, s;

	while (1)
	{
		s = f1 + f2;

		if (s > 4000000)
			break;

		if ((s % 2) == 0)
			ts += s;

		f1 = f2;
		f2 = s;
	}
	printf("%.Of\n", ts);

	return (0);
}

