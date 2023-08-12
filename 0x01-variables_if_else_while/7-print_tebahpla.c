#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Prints the lowercase alphabet in reverse
 * Return: Always (0) Success
 */

int main(void)
{
	char character;

	for (character = 'z'; character >= 'a'; --character)
	{
		putchar(character);
	}
	putchar(character);
	return (0);
