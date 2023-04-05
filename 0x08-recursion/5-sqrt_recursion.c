#include "main.h"

int helper(int, int);
/**
 * _sqrt_recursion - eturns the natural square root of a number
 *
 * @n:integer
 * Return: return integer
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

/**
 * helper - checks square root of a number
 * @i:helper
 * @n: integer to test
 * Return: return integer
 */
int helper(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
	{
		return (-1);
	}
	if (sqr == n)
	{
		return (i);
	}
	else
	{
		return (helper(n, i + 1));
	}
}
