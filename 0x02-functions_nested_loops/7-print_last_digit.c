#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - This function print the last digit
 * @n: The last digit to be printed
 * Return: Always the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
	}
	else
	{
		last_digit = k % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}	
