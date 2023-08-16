#include "main.h"
#include <stdio.h>

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
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (num = n; num >= 98; num--)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
