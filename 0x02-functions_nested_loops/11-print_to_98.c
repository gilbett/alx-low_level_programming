#include "main.h"

/**
 * print_to_98 - This function print natural numbers
 * @n: The initial number
 */

void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			if (num != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (num = n; num >= 98; num--)
		{
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			if (num != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}



