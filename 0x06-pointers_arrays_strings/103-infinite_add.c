#include "main.h"
#include <stdio.h>

/**
 * infinite_add -  adds two numbers
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l;
	int m;
	int n;
	int p;

	while (*(n1 + i) != '\0')
	{
		i++;
	}
	while (*(n2 + j) != '\0')
	{
		j++;
	}
	if (i >= j)
	{
		m = i;
	}
	else
	{
		m = j;
	}
	if (size_r <= m - 1)
	{
		return (0);
	}
	r[m + 1] = '\0';
	i--, j--, size_r--;
	n = *(n1 + i) - 48, p = *(n2 + j) - 48;
	while (m >= 0)
	{
		l = n + p + k;
		if (l >= 10)
		{
			k = l / 10;
		}
		else
		{
			k = 0;
		}
		if (l > 0)
		{
			*(r + m) = (l % 10) + 48;
		}
		else
		{
			*(r + m) = '0';
		}
		if (i > 0)
		{
			i--, n = *(n1 + i) - 48;
		}
		else
		{
			n = 0;
		}
		if (j > 0)
		{
			j--, p = *(n2 + j) - 48;
		}
		else
		{
			p = 0;
		}
		m--, size_r;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
