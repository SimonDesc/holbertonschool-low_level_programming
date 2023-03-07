#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *@argc: the number of arguments
 *@argv: the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc != 3)
	{
		return (1);
	}
	else
	{
	(void) argc;
	sum = atoi(argv[i]) * atoi(argv[i + 1]);
	printf("%d\n", sum);
	}
	return (0);
}
