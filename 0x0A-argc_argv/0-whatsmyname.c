#include <stdio.h>

/**
 * main - function to print its name
 * @argc: parameter
 * @argv: an array
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
