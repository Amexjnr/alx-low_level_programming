#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard.
 * @a: array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int r, k;

	for (r = 0; r < 8; r++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[r][k]);
		_putchar('\n');
	}
}
