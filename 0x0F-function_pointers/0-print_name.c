#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: name to print
 * @f: pointer to a function which print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
