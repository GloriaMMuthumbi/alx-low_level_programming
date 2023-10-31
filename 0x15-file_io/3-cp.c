#include "main.h"
/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read, written;
	char b[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((read = read(fd_from, b, sizeof(b))) > 0)
	{
		written = write(fd_to, b, read);
		if (written != read)

		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't c;pse fd\n");
		exit(100);
	}
	return (0);
}
