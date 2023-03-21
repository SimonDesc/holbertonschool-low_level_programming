#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - print a name
 *
 *
 *@name: the name
 *@f: the pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
