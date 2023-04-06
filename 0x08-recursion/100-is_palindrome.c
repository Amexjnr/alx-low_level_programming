#include "main.h"

int _pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: Character to be checked
 *
 * Return: 1 if it is palindrome, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @l: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int _pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (_pal(s, i + 1, l - 1));
}
