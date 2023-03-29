#include "main.h"

/**
 * * _strncpy - main function to concatenate two strings
 *
 * @dest: destination to copy
 * @src: source
 * @n: lines to append
 *
 * Return: value of char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
