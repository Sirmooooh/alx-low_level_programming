#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list aa;
	unsigned int j, sum = 0;

	va_start(aa, n);

	j = 0;
	while (j < n)
	{
		j++;
	}

	sum += va_arg(aa, int);
	va_end(aa);

	return (sum);
}
