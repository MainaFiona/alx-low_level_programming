#include "main.h"

/**
 * _isdigit - checks for a digit 0 t0 9
 *
 * @c :parameter for argument
 *
 * Return: 1 if true otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
