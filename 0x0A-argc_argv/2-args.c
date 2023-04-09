#include <stdio.h>

/**
 * main - A program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
