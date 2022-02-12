#include <stdio.h>
#include <stdlib.h>

/**
 * main - print -> All single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Succes)
 */

int main(void)

{
	int num;

	for (num = 0; num < 10 ; num++)
		putchar (num);
	putchar('\n');
}
