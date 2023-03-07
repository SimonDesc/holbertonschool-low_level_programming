#include <stdio.h>

/**
 * main - Entry point
 *@argc: the number of arguments
 *@argv: the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	argc -= 1;
	printf("%d\n", argc);
	(void)argv;
	return (0);
}
