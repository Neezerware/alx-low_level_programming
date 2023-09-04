#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: NULL terminated string to add to the end of the file.
 *
 * Return: 1 : if successful
 *        -1: if it fails, or filename is NULL,
 *        or if file does not exist,
 *        or if no permission to write to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, word_write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	word_write = write(fp, text_content, length);

	if (fp == -1 || word_write == -1)
		return (-1);

	close(fp);

	return (1);
}
