#include "main.h"
/**
 * read_textfile - Function that reads a text file and prints
 * it to the POXIS standard output.
 * @filename:Name's file
 * @letters:is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	rd = read(op, buffer, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
		return (0);

	close(op);
	free(buffer);
	return (wr);
}
