#include "main.h"
#include <stdio.h>
/**
 * _strcmp - returns an integer indicating the result of the
 *  comparison
 * 
 * @s1: the first word
 * @s2: the second word
 * Return: 0,if the s1 and s2 are equal;
 * a negative value if s1 is less than s2;
 * a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i, c1, c2, cmax, result=0;

	while (s1[c1] != '\0')
	{
		c1++;
	}
	while (s2[c2] != '\0')
	{
		c2++;
	}
	cmax = (c1 > c2) ? c1 : c2;

	while (i <= cmax)
	{
		while (s1[i] == s2[i])
		{
			if (s1[i] == '\0' && s2[i] == '\0')
			{
				return (0);
			}
			else
			{
				i++;
			}
		}
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	return(0);

}
