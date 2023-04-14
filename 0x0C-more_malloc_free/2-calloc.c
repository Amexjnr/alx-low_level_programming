#include "main.h"

/**
* _calloc - A  function allocates memory for an array of nmemb elements
* of size bytes each and returns a pointer to the allocated memory.
* @nmemb: number of elements
* @size: size of the memory block to be allocated
*
* Return: NULL If nmemb or size is 0 or malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (index = 0; index < (nmemb * size); index++)
			block[index] = 0;
		return (block);
	}
	else
		return (NULL);
}
