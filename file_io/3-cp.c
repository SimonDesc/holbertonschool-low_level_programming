#include "main.h"
/**
 * ifclose - Short description, single line
 * @file: Description of parameter x
 * @file2: a file
 * Return: an int
 */
void ifclose(int file, int file2)
{
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
 * main - Short description, single line
 * @argc: Description of parameter x
 * @argv: the letter
 * Return: an int
 */
int main(int argc, char **argv)
{
	int n = 0, file_from, file_to, close1, close2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	while ((n = read(file_from, buffer, 1024)) != 0)
	{
		if (n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		if (write(file_to, buffer, n) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	close1 = close(file_from);
	close2 = close(file_to);
	ifclose(close1, close2);
	return (0);
}


