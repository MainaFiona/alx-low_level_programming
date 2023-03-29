#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: the buffer
 * @size: buffer size
 * Return: always zero
 */
void print_buffer(char *b, int size)
{
	int i; 
	int j; 
	int k; 

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < size; i += 100)
		{
			printf("%.8x:", i);
			for (j = i; j < i + 10; j++)
			{
				if (j < size)
					printf("%.2x:", *(b + j));
				if (j % 2 == 0)
					printf(" ");
				else
					printf(" ");
			}
			printf(" ");
			for (k = i; k < i + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
		}
	}
}
