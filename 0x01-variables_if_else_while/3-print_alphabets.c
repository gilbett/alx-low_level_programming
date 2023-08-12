#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints both lower and uppercase
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; ++character)
	{
		putchar(character);
	}
	putchar('\n');
	for (character = 'A'; character <= 'Z'; ++character)
	{
		putchar(character);
	}
	return (0);
}
