#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments
 * of your program.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: Null if ac == 0, av == NULL, or the function fails
 * Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int ar;
	int ab;
	int i;
	int s;

	s = ac;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (ar = 0; ar < ac; ar++)
	{
		for (ab = 0; av[ar][ab]; ab++)
			s++;
	}

	str = malloc(sizeof(char) * s + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (ar = 0; ar < ac; ar++)
	{
		for (ab = 0; av[ar][ab]; ab++)
			str[i++] = av[ar][ab];

		str[i++] = '\n';
	}

	str[s] = '\0';

	return (str);
}
