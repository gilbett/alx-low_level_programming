#include "main.h"

/**
 * _abs- Computes the absolute avlue of an integer
 * @num: This is an integer to be printed
 * Return: Always (num) for positive integer, (-num) for negative
 */

int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (-num);
	}
}
