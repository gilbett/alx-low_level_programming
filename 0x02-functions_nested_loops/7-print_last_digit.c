#include "main.h"

/**
 * print_last_digit - This function print the last digit
 * @n: The last digit to be printed
 * Return: Always the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	return (last_digit);
}
