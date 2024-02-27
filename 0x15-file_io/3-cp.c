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
	int op_src, op_des, wrt, rd, src_cl, des_cl;
	char *buff[1024];

	op_src = open(file_from, O_RDONLY);

	rd = read(op_src, buff, 1024);
	if (op_src == -1 || rd == -1)
		return (98);

	op_des = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (op_des == -1)
		return (99);

	while (rd == 1)
	{
		wrt = write(op_des, buff, rd);
		if (wrt == -1)
			return (99);
		rd = read(op_src, buff, 1024);
		if (rd == -1)
			return (98);
	}
	src_cl = close(op_src);
	if (src_cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", src_cl);
		return (100);
	}
	des_cl = close(op_des);
	if (des_cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", des_cl);
		return (100);
	}
	return (0);
}

/**
 * main - The main function that copy file from source to destination
 * @argc; The count of the argument
 * @argv: Double pointer to the argument vector
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int count;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit (97);
	count = cp(argv[1], argv[2]);
	switch (count)
	{
		case (98):
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			exit (98);
		case (99):
			dprintf(STDERR_FILENO, "Error: can't write to file %s\n", argv[2]);
			exit (99);
		case (100): 
			exit (100);
		default:
			return (0);
	}
}
