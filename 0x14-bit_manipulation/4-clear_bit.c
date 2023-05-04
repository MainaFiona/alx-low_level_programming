#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: unsigned int long
 * @index:  is the index, starting from 0 of the bit you want to get
 * Return:return int value
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	*n = *n & (~(1 << index));
	return (1);
}
