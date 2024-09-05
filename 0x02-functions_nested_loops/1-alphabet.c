#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case using _putchar followed by new line
 *
 */

void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		_putchar('\n');
		alphabet++;
	}
}
