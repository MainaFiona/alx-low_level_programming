#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints a string
 *
 * @str: a parameter to _puts function
 */
void puts2(char *str)
{
	int i;
	int j;

	j = strlen(str);
	for(i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
