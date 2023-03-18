#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORDS 100
/**
 * strtow - splits a string into words
 *
 * @str: argc
 * Return: A pointer to a array of strings(words)
 */
char **strtow(char *str)
{
	char **words;
	int word_count = 0;
	int i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = malloc(sizeof(char *) * (MAX_WORDS + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] != '\0' && word_count < MAX_WORDS)
		{
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++;

			words[word_count] = malloc(j - i + 1);
			if (words[word_count] == NULL)
			{
				for (k = 0; k < word_count; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}

			strncpy(words[word_count], &str[i], j - i);
			words[word_count][j - i] = '\0';
			word_count++;
			i = j;
		}
	}
	words[word_count] = NULL;
	if (word_count == 0)
		return (NULL);
	return (words);
}

