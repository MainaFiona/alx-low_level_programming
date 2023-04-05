#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: a parameter to _puts function
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
