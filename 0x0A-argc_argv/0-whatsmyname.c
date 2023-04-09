#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
