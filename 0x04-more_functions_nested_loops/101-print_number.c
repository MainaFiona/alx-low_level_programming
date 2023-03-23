#include <stdio.h>
/**
 * print_number - prints an integer
 *
 * @n: interger to print
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
