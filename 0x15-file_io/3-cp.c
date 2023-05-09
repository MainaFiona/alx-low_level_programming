#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int f1, f2;
	int byt = 0;
	int nbyt= 0;
	char buffer[1024];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
	}
	f2 = open(argv[2], O_TRUNC | 0_CREATE | O_WRONLY, 0664);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do
	{
		byt = read(f1, buffer, 1024); 
		if (byt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		nbyt = wrire(f2, buffer, byt);
		if (nbyt == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                        exit(99);
                }
	} while (byt == 1024)
	if (close(f1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
                exit(100);
	}
	if (close(f2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
                exit(100);
	}
	return (0);
}
