#include "main.h"
/**
 * create_file - A function that creates a file.
 * @filename: Apointer to the  name of the file to create.
 * @text_content: A pointer to a null terminated string to write to the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wrt, l;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (l = 0; text_content[l];)
		l++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	wrt = write(op, text_content, l);
	if (op == -1 || wrt == -1)
		return (-1);

	close(op);
	return (1);
}
