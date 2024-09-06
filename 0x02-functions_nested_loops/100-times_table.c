#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of times table to print
 *
 */

void print_times_table(int n)
{
	int i, j, mul;

	if ((n < 0) || (n > 15))
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j == 0)
				{
					_putchar(mul + '0');
				}
				else if (mul < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if ((mul >= 10) && (mul <= 99))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if (mul > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mul / 100) + '0');
					_putchar(((mul % 100) / 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
