#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to make change
 * @argc: parameter
 * @argv: an array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i;
	int n;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			n = n - coins[i];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);


}
