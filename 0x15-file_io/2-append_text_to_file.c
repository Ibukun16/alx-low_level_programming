#include "main.h"

/**
 * append_text_to_file - A function that apend text at the end of a file
 * @filename: Pointer to the to the file that contain the text
 * @text_content: Pointer to the string to be added to the text
 *
 * Return: 1 for success, else -1 for failure,
 * if file does not exist, o not create.
 * if filename is NULL, return -1,
 * if text_content is NULL, do not add anything to file.
 * Return 1 if the file already exist and -1 if the file does not exist
 * or if you do not have permission to write to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(op);
		return (1);
	}

	while (text_content[len])
		len++;
	wr = write(op, text_content, len);
	close(op);

	if ((wr == -1) || wr != len)
		return (-1);

	return (1);
}
