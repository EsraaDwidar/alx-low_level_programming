#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - the function
 * @size: size of the array
 * @action: pointer to the function we need to use
 * @array: an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(action) (array[i]);
		}
	}
}
