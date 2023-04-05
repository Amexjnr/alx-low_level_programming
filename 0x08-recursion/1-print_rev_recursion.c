#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse.
 * @s: character to be checked
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
