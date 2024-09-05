#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase x10
 *
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int n;

	n = 0;
	while (n <= 9)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		n++;
		_putchar('\n');
	}
}
