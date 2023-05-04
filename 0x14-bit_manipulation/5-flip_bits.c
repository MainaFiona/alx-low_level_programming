#include "main.h"

/**
 * flip_bits - returns no of bits you need to flip fo get frm one no to another
 * @n: unsigned int long
 * @m: unsigned long int
 * Return:return int value
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	n = n ^ m;
	while (n)
	{
		n &= (n - 1);
		count++;
	}
	return (count);
}
