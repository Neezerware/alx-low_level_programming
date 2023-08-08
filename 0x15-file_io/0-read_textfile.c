#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: text file to read
 * @letters:  letters to be read
 * Return: w- actual number of letters read and printed
 *        0 when expected number of bytes is not writen
 *        or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t word_read, word_write, fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	word_read = read(fd, buffer, letters);
	if (word_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	word_write = write(STDOUT_FILENO, buffer, word_read);
	if (word_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (word_write);
}
