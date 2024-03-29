#include "main.h"
/**
 * append_text_to_file- appends text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: the text to integrate
 *
 * Return: 1 on sucess, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, strlen(text_content));
	close(fd);

	return (1);
}
