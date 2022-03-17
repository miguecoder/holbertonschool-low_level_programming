#include "function_pointers.h"
/**
 * int_index - Function that searches for a integer
 * @array: array for serach
 * @size: size of the array
 * @cmp: pointer to function to use.
 * Return: the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (!array || size <= 0 || !cmp)
	{
		return (-1);
	}
	for (i = 0 ; i < size ; i++)
	{
		x = cmp(array[i]);

		if (x == 1)
		{
			return (i);
		}
	}
	return (-1);
}
