#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - the sum of all its parameters.
 * @n: the number of parameters to be passed
 * @..: the parameters
 * Return: If n == 0, 0 if not
 * add
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;

	unsigned int i, sum = 0;

	va_start(p, n);
	for (i = 0 ; i < n ; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
