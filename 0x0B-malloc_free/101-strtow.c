#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag = 0, c = 0, w = 0;

	while (s[c] != '\0')
	{
		if (s[c] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
		c++;
	}
	return (w);
}

/**
 * **strtow - a function that splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, j = 0, c = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[len] != '\0')
		len++;
	matrix = (char **) malloc(sizeof(char *) * (len + 1));

	if (matrix == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (i < len && str[i] == ' ')
			i++;
		if (i == len)
			break;
		c = 0;
		while (i + c < len && str[i + c] != ' ')
			c++;
		tmp = (char *) malloc(sizeof(char) * (c + 1));

		if (tmp == NULL)
			return (NULL);
		j = 0;
		while (j < c)
		{
			tmp[j] = str[i + j];
			j++;
		}
		tmp[c] = '\0';

		matrix[k++] = tmp;
		i += c;
	}
	matrix[k] = NULL;
	return (matrix);
}
