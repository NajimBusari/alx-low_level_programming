#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer whose absolute value is computed
 *
 * Return: absolute value of integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
