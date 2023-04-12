#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a
* 2 dimensional array of integers.
* @width: width of array
* @height: height of array
*
* Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int index;
	int j;

	index = 0;
	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; index < height; index++)
		{
			array[index] = (int *) malloc(sizeof(int) * width);
			if (array[index] != NULL)
			{
				for (j = 0; j < width; j++)
					array[index][j] = 0;
			}
			else
			{
				while (index >= 0)
				{
					free(array[index]);
					index--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
