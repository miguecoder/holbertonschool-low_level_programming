#include <stdio.h>
#include <stdlib.h> /*atoi*/
/**
 * main - program that that multiplies two numbers.
 * @argc: is a count of the arguments supplied to the program.
 * @argv: is an array of pointers to the strings which are those arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int mndo, mdor, mult;

	if (argc == 3)
	{
		/**
		 * atoi function - convert string to integer
		 *
		 */
		mndo = atoi(argv[1]);
		mdor = atoi(srgv[2]);
		mult = mndo * mdor;

		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
