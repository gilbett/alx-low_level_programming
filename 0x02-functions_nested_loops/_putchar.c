#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - print out the character
 * @c: character printed
 * Return: Always (0) Sucess
 * on error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
