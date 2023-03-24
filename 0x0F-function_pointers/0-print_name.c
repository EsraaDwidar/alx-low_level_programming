#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name
 * @name: name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (0);
	(f)(name);
}
