#include <stdio.h>

/**
 * main - print the number of 0 to 100 with Fizz, Buzz and FizzBuzz
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
