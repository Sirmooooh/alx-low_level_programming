#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: Result, point to the beginning of the located substring otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = 0;

	while (*haystack != '\0')
	{
		char *l = haystack;
		char *p = needle;

		while (*p != '\0' && *l == *p)
		{
			l++;
			p++;
		}
		if (*p == '\0')
		{
			result = haystack;
			break;
		}
		haystack++;
	}
	return (result);
}
