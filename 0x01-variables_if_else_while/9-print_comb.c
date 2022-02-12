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
	int num;

	for (num = 0 ; num <= 9 ; num++)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
