#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: a parameter to _puts function
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
	_putchar('\n');
}
