#include "main.h"

/**
* string_nconcat - A function that concatenates
* n bytes of a string to another string
* @s1: The first string.
* @s2: The second string.
* @n: number of bytes from s2 to concatenate to s1
*
* Return: If the function fails - NULL.
* Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j]; j++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);
	len = 0;

	for (j = 0; s1[j]; j++)
		concat[len++] = s1[j];

	for (j = 0; s2[j] && j < n; j++)
		concat[len++] = s2[j];
	concat[len] = '\0';
	return (concat);
}
