#include "main.h"

/**
 * _isalpha - checks for lowercase characters
 *
 * @c :parameter for argument
 *
 * Return: 1 if true otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

