#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_a_char - function that prints character
 * @ap: list of variadic
 * Return: Always 0.
 */
void print_a_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_a_int - function that prints integer
 * @ap: list of variadic
 * Return: Always 0.
 */
void print_a_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_a_float - function that prints float
 * @ap: list of variadic
 * Return: Always 0.
 */
void print_a_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_a_str - function that prints string
 * @ap: list of variadic
 * Return: Always 0.
 */
void print_a_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
}
/**
 * print_all - function that prints anything
 * @format: formats string
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";
	va_list valist;

	op_t  ops[] = {
		{ "c", print_a_char },
		{ "i", print_a_int },
		{ "f", print_a_float },
		{ "s", print_a_str },
		{ NULL, NULL}
	};
	va_start(valist, format);
	while (format[i] && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[j] == *ops[j].c)
			{
				printf("%s", separator);
				ops[j].f(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);

}
