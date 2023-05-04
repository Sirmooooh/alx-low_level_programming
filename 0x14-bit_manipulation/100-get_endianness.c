#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *z = (char *) &l;

	return (*z);
}
