#include <stdio.h>

/**
 * main  - computes and prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int n, sum;

	sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
