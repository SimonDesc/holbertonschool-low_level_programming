#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void printfunc(char a);

int main(void)
{
	printfunc('_');
	printfunc('p');
	printfunc('u');
	printfunc('t');
	printfunc('c');
	printfunc('h');
	printfunc('a');
	printfunc('r');
	putchar('\n');
	return (0);
}

void printfunc(char a)
{
        putchar(a);
}

