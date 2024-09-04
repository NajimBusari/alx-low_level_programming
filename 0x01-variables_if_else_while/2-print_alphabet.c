#include <stdio.h>

/**
 * main - prints alphabets in lower case followed by new line
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
