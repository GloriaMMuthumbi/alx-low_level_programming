#include "main.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to the name of the file
 * @letters: number of letters to read and print
 * Return: returns the actual number of letter it could
 * read and print. otherwise, return 0 if file cannot be operned
 * or read and if filename is NULL and if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int *b;
	ssize_t r, w;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	b = malloc(letters);
	if (b == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, b, letters);
	close(fd);

	if (r == -1)
	{
		free(b);
		return (0);
	}

	w = write(STDOUT_FILENO, b, r);
	free(b);

	if (w == -1 || r != w)
		return (0);

	return (w);
}
