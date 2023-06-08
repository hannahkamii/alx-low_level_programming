#include "main.h"
/**
 * is_prime_number - checks if a number is divisible
 * @n: the number to be checked
 * @div: the divisor
 * Return: divisible 0 not divisible 1
 */
int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}
	for (i = 2 ; i * i <= n ; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
