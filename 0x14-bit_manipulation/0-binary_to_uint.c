#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string to convert
 * Return:he converted number to unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[j] == '0' || b[j] == '1')
	{
		i <<= 1;
		i += b[j] - '0';
		j++;
	}
	return (i);
}
