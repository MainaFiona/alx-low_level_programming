#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: parameter
 * @argv: an array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int k;
	char *f = (char *) main;

	if (k < 0)
	{
		printf("Error\n");
		exit(1);
	}
	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}
	k = atoi(argv[1]);

	for (i = 0; i < k; i++)
	{
		printf("%02x", k[i] & 0xFF);
		if (i != k - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
