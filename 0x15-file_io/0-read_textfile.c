#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fld;
	ssize_t p;
	ssize_t r;

	fld = open(filename, O_RDONLY);
	if (fld == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fld, buffer, letters);
	p = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fld);
	return (p);
}
