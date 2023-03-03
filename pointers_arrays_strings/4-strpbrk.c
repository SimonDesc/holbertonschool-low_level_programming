#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strspn -gets the length of a prefix substring
 * @s: the string
 * @accept: the allowed caracter
 * Return: the length of allowed car
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + 1);
			}
		}
	}
	return (0);
}
