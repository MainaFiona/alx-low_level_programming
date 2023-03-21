#include "main.h"
#include <stdlib.h>
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
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));

}
