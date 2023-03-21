#include "main.h"

/**
 * int _islower(int c) - checks for lowercase characters
 *
 * Return: 1 if true otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
