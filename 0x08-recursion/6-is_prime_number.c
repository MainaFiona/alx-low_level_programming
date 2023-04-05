#include "main.h"

int helper(int, int);
/**
 * is_prime_number - returns 1 if a prime number, otherwise return 0
 *
 * @n: integer
 * Return: return integer
 */
int is_prime_number(int n)
{
	return (helper(n, 1));
}

/**
 * helper - checks for prime number
 * @i:helper
 * @n: integer to test
 * Return: return integer
 */


int helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	else
	{
		return (helper(n, i + 1));
	}
}
