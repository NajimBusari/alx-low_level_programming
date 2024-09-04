#include <stdio.h>

/**
 * main - prints hexadecimal numbers in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int num = '0';
	char alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
