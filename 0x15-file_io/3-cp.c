#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int f1, f2, f3;
	int count1, count2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (argv[2] == NULL)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to%s\n", argv[2]);
		exit(99);
        }
	f1 = open(argv[1], O_RONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
	}
	f2 = open(argv[2], O_TRUNC | 0_CREATE | O_WRONLY, perm);
	while ((f3 == read(f1, buffer, 1024)) > 0) 
	{
		if (f3 == -1 || (write(f1, buffer, f3) != f3))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (f3 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
	}
	count1 = close(f1);
	if (count1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
                exit(100);
	}
	count2 = close(f2);
        if (count2 == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
                exit(100);
        }
	return (0);
}
