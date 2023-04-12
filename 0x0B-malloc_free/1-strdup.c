#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *oo;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	oo = malloc(sizeof(char) * (i + 1));
	if (oo == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		oo[j] = str[j];
	return (oo);
}
