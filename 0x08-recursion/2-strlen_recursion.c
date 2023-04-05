#include "main.h"

/**
 * _strlen_recursion - a function that prints the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	return (*s == '\0' ? 0 : 1 + _strlen_recursion(s + 1));
}
