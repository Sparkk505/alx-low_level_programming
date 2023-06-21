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
	int c, i;
	unsigned long f1 = 1, f2 = 2, s, mx = 100000000, f1o = 0, f2o = 0, su = 0;

	for (c = 1; c <= 98; c++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		i = numLength(mx) - 1 - mumLength(f1);

		while (f1o > 0 && i > 0)
		{
			printf("%d", 0);
			i--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		su = fo1 + fo2 + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
