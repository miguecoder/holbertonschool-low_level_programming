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
	if (argc == 3)
	{
		/**
		 * atoi function - convert string to integer.
		 */
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
