#include "main.h"
#include <stdio.h>

/**
 * _memset - memory with a constant byte
 * @s: string to set
 * @b: character
 * @n: is an integer
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
