#include <stdio.h>

/**
 * main - Entry Point for the program
 * Description: Print single digit numbers of base 10 using puchar
 * Return: Always (0) Success
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
