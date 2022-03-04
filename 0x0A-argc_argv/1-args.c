#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: is a count of the arguments supplied to the program.
 * @argv: is an array of pointers to the strings which are those arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);

	return (0);
}
