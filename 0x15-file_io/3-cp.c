#include "main.h"
/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return 0 on success
 */
int main(int argc, char *argv[])
{
	mode_t perms = S_IRUSR | S_IWUSR | S_IROTH | S_IRGRP;
	char b[1024];
	int fd_from, fd_to, num;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]), exit(99);
	while ((num = read(fd_from, b, sizeof(b))))
	{
		if (num == -1 || write(fd_to, b, num) != num)
		{
			if (num == -1)
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			else
				dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);

			close(fd_from);
			close(fd_to);
			exit(98 + (num == -1));
		}
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		if (close(fd_from) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		if (close(fd_to) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);

		exit(100);
	}

	return (0);
}
