#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new created array
 */
int *array_range(int min, int max)
{
	int *s;
	int i;
	int k;

	if (min > max)
	{
		return (NULL);
	}
	k = max - min + 1;

	s = malloc(sizeof(int) * k);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < k; i++)
	{
		s[i] = min++;
	}
	return (s);
}
