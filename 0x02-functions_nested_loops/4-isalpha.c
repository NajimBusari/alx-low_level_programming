#include "main.h"

/**
 * _isalpha - checks if character is a letter, lowercase or uppercase
 * @c: character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase; 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= '0' && c < '9') || (c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
