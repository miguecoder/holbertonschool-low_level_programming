#include "main.h"
/**
 * get_bit - function that returns the value of a bit at given index
 * @n: number
 * @index: index.
 * Return: nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
