#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of number, and if it is 0, greater than 5,
 * or less than 6
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if ((last < 6) && (last != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}

	return (0);
}
