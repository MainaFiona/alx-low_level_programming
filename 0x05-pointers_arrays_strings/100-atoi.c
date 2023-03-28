#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: returns integer
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 1;
	int k = 0;
	unsigned int l = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			j *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			k = 1;
			l = (l * 10) + (s[i] - '0');
			i++;
		}
		if (k == 1)
		{
			break;
		}
		i++;
	}
	l *= j;
	return (l);
}
