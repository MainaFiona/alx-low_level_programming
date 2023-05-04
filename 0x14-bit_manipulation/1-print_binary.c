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
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_rec(n);
	}
}
