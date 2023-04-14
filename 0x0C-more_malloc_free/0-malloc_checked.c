#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 * @s: size of the memory block to be allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int s)
{
	void *code;

	code = malloc(s);
	if (code == NULL)
		exit(98);
	return (code);
}
