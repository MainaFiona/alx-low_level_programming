#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: parameter
 * @argv: an array
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i, j, total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	total = i * j;
	printf("%d\n", total);
	return (0);
}
