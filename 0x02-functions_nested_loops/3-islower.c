#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if c is lower, 0 if otherwise
 */

int _islower(int c)
{
	c = 'a' + '0';
	if (c <= ('z' + '0'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
