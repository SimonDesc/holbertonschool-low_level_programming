#include <stdio.h>

/**
 * main - Entry point
 *@argc: the number of arguments
 *@argv: the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}	
	return (0);
}
