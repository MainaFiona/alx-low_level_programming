#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int nfile;
	int byt;

	if (filename == NULL)
	{
		return (-1);
	}
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (i == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		nfile = 0;
		while (text_content[nfile])
		{
			nfile++;
		}
		byt = write(i, text_content, nfile);
		if (byt == -1)
		{
			return (-1);
		}
	}
	if (close(i) == -1)
	{
		return (-1);
	}
	return (1);
}
