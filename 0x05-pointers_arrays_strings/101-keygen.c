#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	int sum = 0;
	int j;
	int k;
	char password[84];

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}
	password[i] = '\0';

	if (sum != 2772)
	{
		j = (sum - 2772) / 2;
		k = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			j++;
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + j))
			{
				password[i] -= j;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + k))
			{
				password[i] -= k;
				break;
			}
		}
	}

	printf("%s", password);
	return (0);
}
