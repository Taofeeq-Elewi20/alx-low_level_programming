#include "main.h"
#include <stdio.h>

/*
 * print_times_table - prints the times table from 0 to 15
 * @c: parameter to be checked
 * Return: 1 or 0
 */

void print_times_table(int n)
{
	int m;
	int result;

	if (n >= 0 && n <= 15)
	{
		for (m = n ; m <= n ; m++)
		{
		_putchar('0');
		for (result = 1; result <= n ; result++)
		{
			_putchar(',');
			_putchar(' ');
			result = n * m;
			if (result <= 99)
				_putchar(' ');
			if (result <= 9)
				_putchar(' ');
			if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10)) % 10 + '0');
			}
			else if (result <= 99 && result >= 10)
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		}
	}	
}
