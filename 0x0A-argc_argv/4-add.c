#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: parameter
 * @argv: an array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int total = 0;
	int i, j, k, num;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if  (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		total = total + num;
	}
	printf("%d\n", total);
	return (0);
}
