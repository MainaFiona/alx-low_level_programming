#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int sum;
	int i;

	sum = 0;

	for (i = 0; i <= 10; i++)
	{
		if ((i % 3 == 0) || (1 % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
