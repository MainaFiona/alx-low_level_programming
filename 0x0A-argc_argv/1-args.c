#include <stdio.h>

/**
 * main - prints the number of arguments passed 
 * @argc: parameter
 * @argv: an array
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
