#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: parameter
 * @argv: an array
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
