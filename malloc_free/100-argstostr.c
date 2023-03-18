#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

char *argstostr(int ac, char **av)
{
	char *dest = NULL;
	int i = 0;
	int j = 0;
	int x = 0;
	int k = 0;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac ; i++) /* Compte le nombre d'argument */
	{
		for (k = 0; av[i][k] ; k++, j++) /* Compte le nombre de caractere de chaque argument */
		{
		}
		j++;
	}
	k = 0;

	dest = malloc(sizeof(char)*j);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac ; i++) /* Compte le nombre d'argument */
	{
		for (k = 0; av[i][k] != '\0';x++, k++)
		{
			dest[x] = av[i][k];
		}
		dest[x] = '\n';
		x++;
	}
	dest[x] = '\0';
	return (dest);

}
