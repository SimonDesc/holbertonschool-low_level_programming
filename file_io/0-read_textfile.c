#include "main.h"
/**
 * read_textfile- Function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: The actual number of letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t rcount;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	rcount = read(fd, buffer, letters);
	if (rcount == -1)
	{
		return (0);
	}
	write(1, buffer, rcount);
	return (rcount);
}
