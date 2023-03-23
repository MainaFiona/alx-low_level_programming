#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c :parameter for argument
 *
 * Return: 1 if true otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
