#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *m;
	ssize_t n;
	ssize_t w;
	ssize_t t;

	n = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	m = malloc(sizeof(char) * letters);
	t = read(n, m, letters);
	w = write(STDOUT_FILENO, m, t);

	free(m);
	close(n);
	return (w);
}
