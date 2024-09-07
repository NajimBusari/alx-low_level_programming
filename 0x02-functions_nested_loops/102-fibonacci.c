#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers, starting from 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	long int n1, n2, n3;
	int i;

	n1 = 1;
	n2 = 2;
	for (i = 1; i <= 50; i++)
	{
		printf("%lu", n1);
		if (i != 50)
		{
			printf(", ");
		}
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("\n");

	return (0);
}
