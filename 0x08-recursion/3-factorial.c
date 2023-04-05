#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	return (n < 0 ? -1 : (n == 0 ? 1 : n * factorial(n - 1)));
}
