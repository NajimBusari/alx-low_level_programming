#include <stdio.h>

/**
 * main - finds and prints sum of even-valued terms of Fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	long int n1, n2, n3, even;

	n1 = 1;
	n2 = 2;
	even = 0;
	while (n2 < 4000000)
	{
		if ((n2 % 2) == 0)
		{
			even += n2;
		}
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("%lu\n", even);

	return (0);
}
