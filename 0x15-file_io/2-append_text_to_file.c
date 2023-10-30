#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer the name of the file
 * @text_content: pointer to the NULL terminated string
 * to be appended
 * Return: returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t t_length = 0;
	int fd, w_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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

