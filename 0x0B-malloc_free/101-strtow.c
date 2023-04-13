#include "main.h"
#include <stdlib.h>

/**
* strtow - splits a stirng into words
* @str: string to be splitted
*
*Return: pointer to the array of splitted words
*/

char **strtow(char *str)
{
	char **split;
	int index, k = 0, tem = 0, s = 0, ws = num_words(str);

	if (ws == 0)
		return (NULL);
	split = (char **) malloc(sizeof(char *) * (ws + 1));
	if (split != NULL)
	{
		for (index = 0; index <= len(str) && ws; index++)
		{
			if ((str[index] != ' ') && (str[index] != '\0'))
				s++;
			else if (((str[index] == ' ') || (str[index] == '\0')) && index && (str[index - 1] != ' '))
			{
				split[k] = (char *) malloc(sizeof(char) * s + 1);
				if (split[k] != NULL)
				{
					while (tem < s)
					{
						split[k][tem] = str[(index - s) + tem];
						tem++;
					}
					split[k][tem] = '\0';
					s = tem = 0;
					k++;
				}
				else
				{
					while (k-- >= 0)
						free(split[k]);
					free(split);
					return (NULL);
				}
			}
		}
		split[ws] = NULL;
		return (split);
	}
	else
		return (NULL);
}

/**
* num_words - A function that counts the number
* of words in str
* @str: string to be used
*
* Return: number of words
*/

int num_words(char *str)
{
	int index;
	int ws;

	index = 0;
	ws = 0;
	while (index <= len(str))
	{
		if ((str[index] != ' ') && (str[index] != '\0'))
		{
			index++;
		}
		else if (((str[index] == ' ') || (str[index] == '\0')) &&
				index && (str[index - 1] != ' '))
		{
			ws += 1;
			index++;
		}
		else
		{
			index++;
		}
	}
	return (ws);
}

/**
* len - returns length of str
* @str: string to be counted
*
* Return: length of the string
*/

int len(char *str)
{
	int len;

	len = 0;
	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
