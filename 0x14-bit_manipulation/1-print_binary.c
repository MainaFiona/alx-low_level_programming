#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return:no return
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 1;

	for (; i < n; i <<= 1)
	{
		if (i > i << 1)
		{
			break;
		}
	}
	if (n != 0 && i > n)
	{
		i >>= 1;
	}
	for (; i > 0; i >>= 1)
	{
		if (n & i)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
