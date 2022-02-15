#include "main.h"

/**
 * main - Print the word "_putchat" with the comand _putchar
 *
 * Return: always 0
 */

int main(void)
{
	char palabra[] = "_putchar";
	int i = 0;

	for (; i < 7 ; i++)
	{
		_putchar(palabra[i]);
	}
	_putchar('\n');

	return (0);
}
