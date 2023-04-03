#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: number of bytes in the initial segment of s which are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *p;

	for (; *s; s++)
	{
		for (p = accept; *p && *p != *s; p++)
			;
		if (*p == '\0')
			return (n);

		n++;
	}
	return (n);
}
