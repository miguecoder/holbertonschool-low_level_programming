#include "main.h"
/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first unsigned integer
 * @m: second unsigned integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;
	n = n ^ m;

	while (n > 0)
	{
		if (n & 1)
			i++;
		n = n >> 1;
	}
	return (i);
}
