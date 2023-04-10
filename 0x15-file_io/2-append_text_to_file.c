#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer filename
 * @text_content: content file
 *
 * Return: 1 is success, -1 is faliure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, x;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)

		x = write(fd, text_content, i);

		if (x == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
