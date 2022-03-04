#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: is a count of the arguments supplied to the program.
 * @argv: is an array of pointers to the strings which are those arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
