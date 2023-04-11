#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: duplicate this string
 * Return: new allocated pointer
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	s = (char *)malloc(j * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
