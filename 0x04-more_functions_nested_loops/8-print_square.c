#include "main.h"

/**
 * print_square - This function prints a square
 * @size: size of the square
 */

void print_square(int size)
{
	int m;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (m = 0; m < size; m++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
