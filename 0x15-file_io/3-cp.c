#include "main.h"
/**
 * cp - A function that copy the content of a file to another.
 * @file_from: A pointer to the source file.
 * @file_to: A pointer to the destination file.
 *
 * Return: An integer.
 */
int cp(char *file_from, char *file_to)
{
	int fd, des, wrt, rd;
	char *buff[1024];

	des = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (des == -1 || buff == NULL)
		return (99);

	fd = open(file_from, O_RDONLY);
	rd = read(fd, buff, 1024);
	do
	{
		if (fd == -1 || rd == -1)
			return (98);
		wrt = write(des, buff, rd);
		if (wrt == -1)
			return (99);
		rd = read(fd, buff, 1024);
		des = open(file_to, O_WRONLY | O_APPEND);
	}while (rd > 0);

	close_file(fd);
	close_file(des);

	return (0);
}

/**
 * close_file - A function that closes open file descriptor
 * @d: The open file descriptor.
 *
 * Return: close value.
 */
void close_file(int d)
{
	int cls;

	cls = close(d);
	if (cls == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d), exit(100);
}

/**
 * main - The main function that copy file from source to destination
 * @argc: The count of the argument
 * @argv: Double pointer to the argument vector
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int cpy;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	cpy = cp(argv[1], argv[2]);
	switch (cpy)
	{
		case(98):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		case (99):
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]), exit(99);
		default:
			return (0);
	}
}
