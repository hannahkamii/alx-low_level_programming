#include "main.h"
#include "stdio.h"
int is_prime_number(int n);
/**
 * is_divisible - checks if a number is divisible
 * @n: the number to be checked
 * @y: the divisor
 * Return: divisible 0 not divisible
 */
int is_prime_number(int n)
{
	int y;

	if (n < 2)
	{
		return 0;
	}
	if (n % y == 0)
	{
		return 0;
	}
	return (n / (y - 1));
}
