#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *s, *p;

	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strnlen(s2, n);
	}
	s = malloc(len1 + len2 + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	p = s;
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			*p++ = *s1++;
		}
	}
	if (s2 != NULL)
	{
		while (n-- > 0 && *s2 != '\0')
		{
			*p++ = *s2++;
		}
	}
	*p = '\0';
	return (s);
}
