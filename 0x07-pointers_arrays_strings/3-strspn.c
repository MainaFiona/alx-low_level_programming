#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accept string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k = 0;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else
			{
				k = 0;
			}
		}
		if (k == 0)
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
		}
	}
	return (l);
}
