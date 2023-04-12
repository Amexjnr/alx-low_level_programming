#include "main.h"
#include <stdlib.h>

/**
* str_concat - A function that concatenates two strings.
* @s1:First string
* @s2:Second string
*
* Return: NULL on failure , but pointer to new string on success
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i;
	int conc_i;
	int len;

	conc_i = 0;
	len = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[conc_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[conc_i++] = s2[i];

	return (concat_str);
}
