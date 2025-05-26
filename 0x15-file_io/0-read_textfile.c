#include "main.h"

/**
 * read_textfile - A function that read a text file and prints it to the POSIX
 * standard output
 * @filename: Pointer to the filename variable
 * @letters: The variable containing the number of characters to write
 *
 * Return: The number of letters it could read and print, if file cannot
 * be opened or read, return 0,
 * if filename is NULL, return 0,
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, wr, rd;
	char (*buffer);

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(op);
		return (0);
	}

	rd = read(op, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(op);
		return (-1);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr != rd)
	{
		free(buffer);
		close(op);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
