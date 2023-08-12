#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program print alphabet in lowercase
 *
 * Return: Always (0) Success
 *
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; ++character)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
