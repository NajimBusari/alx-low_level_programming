#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number whose last digit is printed
 *
 * Return: value of last digit of n
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');

	return (last);
}
