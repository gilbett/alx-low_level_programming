#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: This program prints combination of two-digit numbers
 * Return: Always (0) Sucess
 */

int main(void)
{
	int m;
	int n;

	for (m = 0; m <= 8; m++)
	{
		for (n = m + 1;  n < 10; n++)
		{
			putchar(m + '0');
			putchar(n + '0');
			if (m != 8 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
