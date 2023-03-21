#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @n: int to get last digit
 *
 * Return: the value of the last digit
 *
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (n < 0)
	{
		n = -n
	}
	if (l > 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);

}
