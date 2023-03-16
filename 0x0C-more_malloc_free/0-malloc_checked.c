#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc check - check the code
 *@p: is pointer
 *
 * Return: Always 0 - when success
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	
	if(p == NULL)
		exit(98);
	
	return (p);
}
