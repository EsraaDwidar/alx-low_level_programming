#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc check - check the code
 *
 * Return: Always 0 - when success
 */
void *malloc_checked(unsigned int b)
{
	void p;
	p = malloc(b);
	
	if(p == null)
		p = 98;
	return p;
}
