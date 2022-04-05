#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index.
 * Return: nothing
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > 8 * sizeof(n))
		return (-1);
	i <<= index;
	i = ~i;
	*n &= i;
	/**n &= ~(1 << index);*/
	return (1);
}
