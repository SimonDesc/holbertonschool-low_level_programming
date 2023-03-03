#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strspn -gets the length of a prefix substring
 * @s: the string
 * @accept: the allowed caracter
 * Return: the length of allowed car
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int result;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				result++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (result);
}
