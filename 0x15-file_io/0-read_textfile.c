#include "main.h"
/**
 * read_textfile - A function that reads a text file and print
 *	the output to the POSIX standard output.
 * @filename: A pointer to the filename.
 * @letters: The number of letters it could read and print.
 *
 * Return: 0 if the function fails or if the filename is NULL
 *	o/wrt - the exact number of bytes read from the textfile.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, wrt, rd;
	char (*buff);

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	o = open(filename, O_RDONLY);
	rd = read(o, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);

	if (o == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);

	return (wrt);
}
