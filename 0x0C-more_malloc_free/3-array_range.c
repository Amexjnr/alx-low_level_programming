#include "main.h"

/**
* array_range - A function that creates an array of integers.
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: the pointer to the newly created array
* Null If min > max or If malloc fails
*/

int *array_range(int min, int max)
{
	int *block;
	int index;
	int k;

	k = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (index = min; index <= max; index++)
		{
			block[k] = index;
			k++;
		}
		return (block);
	}
	else
		return (NULL);

}
