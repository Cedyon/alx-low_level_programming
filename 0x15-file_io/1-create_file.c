#include "main.h"

/**
 * create_file - function that creates  file
 * @filename: pointer filename
 * @text_content: content  file
 *
 * Return: 1 is success, -1 is failure
 */
int create_file(const char *filename, char *text_content)
{
		int i = 0;
		int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	write(fd, text_content, i);

	return (1);
}
