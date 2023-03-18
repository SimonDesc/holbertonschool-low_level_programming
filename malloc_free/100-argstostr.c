#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments
 *
 * @ac: argc
 * @av: argv
 * Return: A pointer to a array of arguments
 */
char *argstostr(int ac, char **av)
{
	char *dest = NULL;
	int i = 0;
	int j = 0;
	int x = 0;
	int k = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac ; i++)
	{
		for (k = 0; av[i][k]; k++, j++)
		{
		}
		j++;
	}
	k = 0;
	dest = malloc(sizeof(char) * j + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac ; i++) /* Compte le nombre d'argument */
	{
		for (k = 0; av[i][k] != '\0'; x++, k++)
		{
			dest[x] = av[i][k];
		}
		dest[x] = '\n';
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
