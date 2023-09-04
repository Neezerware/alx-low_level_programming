#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 : if successful
 * - 1 : if file cannot be created,
 * file cannot be written or filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, word_write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	word_write = write(fd, text_content, length);

	if (fd == -1 || word_write == -1)
		return (-1);

	close(fd);

	return (1);
}
