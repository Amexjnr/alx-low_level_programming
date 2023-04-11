#include <stdio.h>
#include <stdlib.h>

/**
* main - A program that adds positive numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
	int index;
	int l;
	int sum;

	sum = 0;
	for (index = 1; index < argc; index++)
	{
		for (l = 0; argv[index][l] != '\0'; l++)
		{
			if (argv[index][l] < '0' || argv[index][l] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[index]);
	}

	printf("%d\n", sum);

	return (0);
}
