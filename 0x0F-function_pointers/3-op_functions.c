#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds function
 *
 * @a: integer a
 * @b: integer b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts function
 *
 * @a: integer a
 * @b: integer b
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplys function
 *
 * @a: integer a
 * @b: integer b
 * Return: multiply of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide function
 *
 * @a: integer a
 * @b: integer b
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo function
 *
 * @a: integer a
 * @b: integer b
 * Return: modulo of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

