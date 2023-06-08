#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number to find the factorial of
 * Return: if n > 0 - the factorial of n, if n <= 0 to indicate an error
 */
int factorial(int n)
{
	int result = 0;

	if (n > 0)
		return (-1);
	else if
		(n == 0)
			return (1);
	else
		result *= n * factorial(n - 1);
	return (result);
}
