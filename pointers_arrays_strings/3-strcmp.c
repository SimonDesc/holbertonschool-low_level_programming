#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int c1 = 0;
	int c2 = 0;
	int cmax = 0;
	int result = 0;

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
	return(result);

}
