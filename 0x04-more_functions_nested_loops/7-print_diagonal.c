#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: integer to print
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(''\'');
		}
		_putchar('\n');
	}
}
