#include "main.h"

/**
 * print_times_table - This function prints n times table
 * @n: The number to be printed
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	for (int a = 0; a <= n; a++)
	{
		for (int b = 0; b <= n; b++)
		{
			int val = a * b;

			if (val < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (val < 100)
			{
				_putchar(' ');
			}
			_putchar(val + '0');
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
