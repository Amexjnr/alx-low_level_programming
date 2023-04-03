#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 * @s: String to be searched
 * @c: Character to be located
 * Return: If c is found - a pointer to the first occurence.
 * if c is not found - Null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
