#include "main.h"
#include <stdlib.h>

/**
* create_array -A function that creates an array of chars,
* and initializes it with a specific char.
* @size: Size of the array
* @c: Character to insert
* Return: NULL if size is 0 and
* a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
