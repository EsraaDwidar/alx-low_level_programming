#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - the function
 *
 * @array: array to pass
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function does not
 * return 0. Otherwise, if no element matches or if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp) (array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
