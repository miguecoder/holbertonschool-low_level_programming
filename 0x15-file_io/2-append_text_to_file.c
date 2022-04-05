#include "main.h"
/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename:Name's file
 * @text_content:is a NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, length = 0, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);

	wr = write(op, text_content, length);
	if (wr == -1)
		return (-1);

	close(op);
	return (1);
}
