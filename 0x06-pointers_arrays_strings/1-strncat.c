#include "main.h"

/**
 * * _strcat - main function to concatenate two strings
 *
 * @dest: destination to copy
 * @src: source
 * @n: lines to append
 *
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
