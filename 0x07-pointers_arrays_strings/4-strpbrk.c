#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: String to be searched
 * @accept: Set of bytes to be searched
 * Return: If a set is matched - a pointer to the matched byte
 * If a set is not matched - Null
 */

char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
		if (*s == accept[r])
		return (s);
		}
	s++;
	}

	return ('\0');
}

