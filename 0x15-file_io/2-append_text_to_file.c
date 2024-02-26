#include "main.h"
/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: A pointer to the filename to append text to
 * @text_content:The null terminated string to add to the end of the file
 *
 * Return: 1 for success and -1 for failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wrt, l;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wrt = write(op, text_content, l);
	if (op == -1 || wrt == -1)
		return (-1);
	close(op);
	return (1);
}
