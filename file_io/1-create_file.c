#include "main.h"
/**
 * create_file- Function that creates a file
 *
 * @filename: the name of the file
 * @text_content: the text to integrate
 *
 * Return: 1 on sucess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (0);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, strlen(text_content));
	close(fd);

	return (1);
}
