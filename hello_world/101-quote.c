#include "stdio.h"
#include "unistd.h"
/**
 * main - Entry point
 *
 * Return: A text without printf or puts
 */
int main(void)
{
	
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", strlen(59));
	return (0);
}
