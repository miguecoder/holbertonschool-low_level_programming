#include "function_pointers.h"
/**
 * array_iterator - function that executes a
 * function given as a parameter on each element of an array
 * @array: name to print
 * @size: size of the array
 * @action: pointer to function to use.
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || size <= 0 || !action)
	{
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
