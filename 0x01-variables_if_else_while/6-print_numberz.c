#include <stdio.h>

/**
 * main - prints 0 to 9 using putchar
 *
 * Return: 0
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
