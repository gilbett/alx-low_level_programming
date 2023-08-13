#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: The program print a combination of single-digit numbers
 * Return: Always (0) Success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar((i % 10) + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
