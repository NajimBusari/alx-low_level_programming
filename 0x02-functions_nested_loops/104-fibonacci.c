#include <stdio.h>

/**
 * main - finds and prints first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int n1, n2, n3, long_start, long_end;
	int i;

	n1 = 1;
	n2 = 2;
	for (i = 0; i <= 98; i++)
	{
		if (n1 <= 1844674407370955161)
		{
			printf("%lu, ", n1);
		}
		else
		{
			long_start = n1 / 10000000000;
			long_end = n1 % 10000000000;
			printf("%lu%lu", long_start, long_end);
			if (i != 98)
			{
				printf(", ");
			}
		}
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("\n");

	return (0);
}
