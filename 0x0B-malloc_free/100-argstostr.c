#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			l++;
			j++;
		}
		i++;
	}
	l += ac;

	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
		i++;
	}
	return (str);
}
