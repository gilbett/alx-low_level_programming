#include "main.h"
/**
 * times_table - Function that prints the 9 times table
 */

void times_table(void)
{
	int row;
	int column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int ans = row * column;

			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (ans >= 10)
				{
					_putchar((ans / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((ans % 10) + '0');
			}
			else
			{
				_putchar(ans + '0');
			}
		}
		_putchar('\n');
	}
}
