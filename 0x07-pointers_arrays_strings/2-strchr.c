#include "main.h"

/**
 * * _strchr -  locates a character in a string
 * @s: string
 * @c: character
 * Return: zero
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	if (s[i] == c)
	{
		return (s + 1);
	}
	return (0);
}
