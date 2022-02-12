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
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
		putchar (letra); /*Almacena una letra entre a - z, para cada ciclo*/
	for (letra = 'A'; letra <= 'Z'; letra++)
		putchar (letra);
	putchar('\n');
	return (0);
}
