#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned int long
 * @index:  is the index, starting from 0 of the bit you want to get
 * Return:return int value
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
