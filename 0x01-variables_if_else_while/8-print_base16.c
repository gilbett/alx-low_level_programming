#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: print all numbers of base 16 in lowercase
 * Return: Always (0) Sucess
 */

int main(void)
{
	int i;
	char character;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0')
	}
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}

