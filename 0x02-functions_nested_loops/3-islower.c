#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c :parameter for argument
 *
 * Return: 1 if true otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
