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

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b  != '1')
		{
			return (0);
		}
		i *= 2;
		i += *b - '0';
		b++;
	}
	return (i);
}
