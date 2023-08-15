#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The haracter whose result is returned
 * Return: Always 1 if lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
