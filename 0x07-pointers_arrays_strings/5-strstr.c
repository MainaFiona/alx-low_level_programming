#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to search
 * @needle: string to find
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	return ('\0');
}
