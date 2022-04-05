#include "main.h"
/**
 * create_file - Function that reads a text file and prints
 * it to the POXIS standard output.
 * @filename:Name's file to create
 * @text_content:is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int op, length = 0, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	wr = write(op, text_content, length);
	if (wr == -1)
		return (-1);

	close(op);
	return (1);
}
