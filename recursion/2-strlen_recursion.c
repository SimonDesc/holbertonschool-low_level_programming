#include "main.h"
/**
 *_strlen_recursion - return the length of a string
 *
 * @s: the string
 */
void _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + (_strlen_recursion + 1));
	}
}
