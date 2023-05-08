#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print;
	ssize_t mo;
	ssize_t o;
	ssize_t h;

	mo = open(filename, O_RDONLY);

	if (mo == -1)
		return (0);
	print = malloc(sizeof(char) * letters);
	h = read(mo, print, letters);
	o = write(STDOUT_FILENO, print, h);

	free(print);
	close(mo);
	return (o);
}
