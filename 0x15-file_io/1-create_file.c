#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer of the name of the file to create
 * @text_content: pointer of NULL termindate string to
 * write to file
 * Return: returns 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_status;
	ssize_t t_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[t_length] != '\0')
			t_length++;

		w_status = write(fd, text_content, t_length);
		if (w_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
