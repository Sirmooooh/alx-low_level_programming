#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int o, co;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (o = 0; s1[o] != '\0'; o++)
		;
	for (co = 0; s2[co] != '\0'; co++)
		;
	conct = malloc(sizeof(char) * (o + co + 1));

	if (conct == NULL)
		return (NULL);
	for (o = 0; s1[o] != '\0'; o++)
		conct[o] = s1[o];
	for (co = 0; s2[co] != '\0'; co++, o++)
		conct[o] = s2[co];
	conct[o] = '\0';
	return (conct);
}
