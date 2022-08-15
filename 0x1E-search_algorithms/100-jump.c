#include "search_algos.h"
#include <math.h>
/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = 0, prev = 0;

    if (array == NULL)
	{
		return (-1);
	}
    step = sqrt(size);
    while (array[min(step, size) - 1] < value)
    {
        prev = step;
        step += floor(sqrt(size));
        if (prev >= size)
        {
            return (-1);
        }        
    }
    while (array[prev] < value)
    {
        prev++;
        if (prev == min(step, size))
        {
            return (-1);
        }
    }
    if (array[prev] == value)
    {
        return prev;
    }
    return (-1);   
}
