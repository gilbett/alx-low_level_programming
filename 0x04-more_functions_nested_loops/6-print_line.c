#include "main.h"

/**
 * print_line - This function draws a straight line
 * @n: The number of _ to be drawn
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
