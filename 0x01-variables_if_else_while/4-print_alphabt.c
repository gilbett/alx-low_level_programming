#include <stdio.h>

/**
 * main - Entry Point
 * Description: Print alphabet excluding letter q and e
 * Return: Always (0) Success
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; ++character)
	{
		if (character != 'q' && character != 'e')
			putchar(character);
	}
	putchar('\n');
	return (0);
}
