#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: a parameter to get string
 * Return: return string in reverse
 */
void print_rev(char *s)
{
	char temp;
	int initial = 0, end = 0;

	end = strlen(*s) - 1;

	while (initial < end)
	{
		temp = *s[end];
		*s[end] = *s[initial];
		*s[initial] = temp;
		initial++;
		end--;
		_putchar(*s);
	}
	_putchar('\n');

}
