#include "main.h"
#include <string.h>
/**
 * string_toupper - return lowercase string to uppercase
 * @c: string to convert to uppercse
 * Return: return string in uppercase
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
