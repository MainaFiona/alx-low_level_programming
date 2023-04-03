#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: is an integer
 * Return: value of destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
