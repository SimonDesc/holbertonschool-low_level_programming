#include "main.h"
/**
 * leet - convert a,e,o,t,l to , 4,3,0,7,1
 * @str: a char
 * Return: a char remplaced by 1337
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char mintab[] = {'a', 'e', 'o', 't', 'l'};
	char majtab[] = {'A', 'E', 'O', 'T', 'L'};
	char numtab[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == mintab[j] || str[i] == majtab[j])
			{
				str[i] = numtab[j];
			}
		}
	}
	return (str);
}
