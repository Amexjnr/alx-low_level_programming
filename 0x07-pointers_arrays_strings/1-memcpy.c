#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: memory where is stored
 * @src: Bytes from memory area
 * @n: number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
