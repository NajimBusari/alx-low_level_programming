#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case using _putchar
 *
 */

void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
		_putchar('\n');
	}
}
