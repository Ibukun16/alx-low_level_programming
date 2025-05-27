#include "main.h"

/**
 * cp - A function that copy the content of a file to another file
 * @fd_from: Pointer to the file to the source file to copy from
 * @fd_to: Pointer to the destination file to copy into
 *
 * Return: An integer to indicate succes
 */
int cp(char *fd_from, char *fd_to)
{
	int src, wr, rd, dest;
	char buff[BUFFER_SIZE];

	src = open(fd_from, O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_from);
		exit(98);
	}

	dest = open(fd_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to);
		close_file(src);
		exit(99);
	}

	while ((rd = read(src, buff, BUFFER_SIZE)) > 0)
	{
		wr = write(dest, buff, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to);
			close_file(src);
			close_file(dest);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_from);
		close_file(src);
		close_file(dest);
		exit(98);
	}

	close_file(src);
	close_file(dest);
	return (0);
}


/**
 * close_file - A function that closes open file descriptor
 * @fd: The opened file descriptor
 *
 * Return: an integer that indicate closed
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - The main function that copies file from source to destination
 * using helper function cp and close_file
 * @argc: The count of the number of argument supplied.
 * @argv: Double pointer to the argument vector indicating the
 * arguments supplied.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (cp(argv[1], argv[2]));
}
