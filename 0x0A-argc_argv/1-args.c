#include <stdio.h>

/**
 * main - function to print its name
 * @argc: parameter
 * @argv: an array
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
