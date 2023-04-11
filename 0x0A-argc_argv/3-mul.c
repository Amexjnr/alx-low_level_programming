#include <stdio.h>

/**
 * _atoi - A function that converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int q, w, e, len, f, dt;

	q = 0;
	w = 0;
	e = 0;
	len = 0;
	f = 0;
	dt = 0;

	while (s[len] != '\0')
		len++;

	while (q < len && f == 0)
	{
		if (s[q] == '-')
			++w;

		if (s[q] >= '0' && s[q] <= '9')
		{
			dt = s[q] - '0';
			if (w % 2)
				dt = -dt;
			e = e * 10 + dt;
			f = 1;
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			f = 0;
		}
		q++;
	}

	if (f == 0)
		return (0);
	return (e);
}

/**
 * main - A function that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int r, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	r = n1 * n2;

	printf("%d\n", r);

	return (0);
}
