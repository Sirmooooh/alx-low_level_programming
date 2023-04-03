#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: input
 * @accept: input
 * Return: Result
 */
char *_strpbrk(char *s, char *accept)
{
	int k;
	char *result = '\0';

	while (*s && !result)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				result = s;
				break;
			}
		}
		s++;
	}
	return (result);
}
