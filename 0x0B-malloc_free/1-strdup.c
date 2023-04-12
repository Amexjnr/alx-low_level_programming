#include "main.h"
#include <stdlib.h>

/**
* _strdup - Returns a pointer to a newly-allocated space in memory
* containing a copy of the string given as parameter.
* @str:String to be copied
*
* Return:  If str == NULL or insufficient memory is available NULL
* Otherwise a pointer to the duplicated string.
*/

char *_strdup(char *str)
{
	char *cpy;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;
	cpy = malloc(sizeof(char) * (j + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cpy[i] = str[i];
	}

	cpy[j] = '\0';

	return (cpy);

}
