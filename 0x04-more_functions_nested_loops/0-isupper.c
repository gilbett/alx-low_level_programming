#include "main.h"

/**
 * _isupper - This program checks for uppercase character
 * @c: The uppercase character
 * Return: Always (1) for uppercae and (0) for otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
