#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: value of char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;

	while (s1[i] != '\0')
		i++;
	j = 0;

	while (s2[j] != '\0')
		j++;
	if (n > j)
	{
		n = j;
	}
	s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (k = 0; k < n; k++)
	{
		s[k + i] = s2[k];
	}
	s[k + i] = '\0';
	return (s);
}
