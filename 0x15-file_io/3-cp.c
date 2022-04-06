#include "main.h"
/**
 * main - function that copy the content of a file to another file
 * @argc: number of argumments (need be three)
 * @argv: array that save arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int op1, op2, rd1, wr2, cl1, cl2;
	char buffer[1024];

	if (agrc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	op1 = open(agrv[1], O_RDONLY);
	if (op1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]), exit(98);

	op2 = open(agrv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (op2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]), exit(99);

	do {
		rd1 = read(op1, buffer, 1024);
		if (rd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]);
			exit(98);
		}

		wr2 = write(op2, buffer, rd1);
		if (w2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]), exit(99);
	} while (rd1 == 1024);

	cl1 = close(op1);
	cl2 = close(op2);
	if (cl1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op1), exit(100);
	if (cl2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2), exit(100);
	return (0);
}
