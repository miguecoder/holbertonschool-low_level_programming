#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print -> print the last digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n, digito;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digito = n % 10;

	if (digito > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, digito);
	}
	else if (digito == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, digito);
	}
	else if (digito < 6 && digito != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digito);
	}

	return (0);

}
