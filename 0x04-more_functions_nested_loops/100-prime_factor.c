#include <stdio.h>
#include "main.h"
/**
 * main  - This program prints the prime factor
 * Return: Always (prime factor)
 */
int main(void)
{
	unsigned long int i, pn = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((pn % i == 0) && (pn != i))
			pn = pn / i;
	}
	printf("%lu\n", pn);
	return (0);
}
