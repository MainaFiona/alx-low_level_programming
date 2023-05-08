#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: file name
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes, buflen;
	int i;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}
	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		return (0);
	}
	bytes = read(i, buffer, letters);
	buflen = write(STDOUT_FILENO, buffer, bytes);
	close(i);
	free(buffer);
	return (buflen);
}
