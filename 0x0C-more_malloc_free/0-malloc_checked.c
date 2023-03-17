#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *malloc_checked - Allocates memory
 * @b: the input
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
