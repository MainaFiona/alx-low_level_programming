#include "main.h"

/**
 * * _strncat - main function to concatenate two strings
 *
 * @dest: destination to copy
 * @src: source
 * @n: lines to append
 *
 * Return: value of char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n &&  src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
