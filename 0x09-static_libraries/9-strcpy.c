#include "main.h"

/**
* _strcpy - Copies string pointed to by src
* @dest: destination
* @src: source
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int index;

	index = -1;
	do
	{
		index++;
		dest[index] = src[index];
	}
	while (src[index] != '\0');
	return (dest);
}
