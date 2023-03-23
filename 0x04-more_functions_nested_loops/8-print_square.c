#include "main.h"

/**
 * print_square - function that draws a square line
 *
 * @size: set square size
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
       	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
