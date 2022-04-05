#include "main.h"
/**
 * get_bit - function that set the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index.
 * Return: nothing
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * sizeof(n))
		return (-1);
	*n |= 1 << index;
	return (1);
}
