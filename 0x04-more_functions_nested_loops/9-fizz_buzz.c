#include <stdio.h>
/**
 * main - This program print numbers and FizzBuzz
 * Description: Prints numbers, Fizz, and FizzBuzz
 * Return: Always (0) for Success
 */
#include <stdio.h>

int main()
{
	int i;
	int j;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
