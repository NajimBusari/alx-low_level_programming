#include "main.h"

/**
 * add - adds two integers and return the result
 * @a: first integer
 * @b: second integer
 *
 * Return: result of adding the 2 integers
 */

int add(int a, int b)
{
	int sum;

	sum = a + b;
	if (sum < 0)
	{
		_putchar('-');
		sum = -sum;
	}
	if (sum >= 10)
	{
		_putchar((sum / 10) + '0');
	}
	_putchar((sum % 10) + '0');

	return (sum);
}
