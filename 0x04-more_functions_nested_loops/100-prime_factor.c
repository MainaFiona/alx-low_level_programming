#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long factor = 2;

	while (factor < number)
	{
		if (number % factor == 0)
		{
			number /= factor;
			printf("factors: %lu remainder: %lu\n", factor, number);
		}
		else
			factor++;
	}
	printf("%lu\n", number);
	return (0);
}
