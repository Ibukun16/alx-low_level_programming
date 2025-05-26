#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: Pointer to the filename to be created
 * @text_content: Pointer to the text document
 *
 * Return: 1 on success, else -1 on failure i.e if file cannot be created,
 * or file cannot be written, or if write function fails.
 * file must have read and write permissions,
 * if file already exists, truncate it
 * if filename is NULL return -1,
 * if text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
		while (text_content[len])
			len++;

	wr = write(op, text_content, len);
	if ((wr == -1) || (wr != len))
	{
		close(op);
		return (-1);
	}

	if (close(op) == -1)
		return (-1);

	return (1);
}



