#include <stdio.h>

/**
 * main - prints alphabets in lowercase except q and e 
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if ((alphabet == 'e') || (alphabet == 'q'))
		{
			alphabet++;
			continue;
		}
		else
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	
	return (0);
}
