#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: array
 * @size: size of the array
 * @action: pointer to the function we need to use
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
        unsigned int c;

	if (array != NULL && action != NULL)
	{
		for (c = 0; c < size; c++)
		{
			(action) (array[c]);
		}
	}
}
