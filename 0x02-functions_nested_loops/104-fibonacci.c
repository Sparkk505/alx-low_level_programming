#include"main.h"

/**
 * numLength - returns
 *
 * @num: input
 *
 * Return: number of digits;
 *
 */
int numLength(int num)
{
	int le = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

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
		i = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && i > 0)
		{
			printf("%d", 0);
			i--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		su = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = s;
		f2o = su;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
