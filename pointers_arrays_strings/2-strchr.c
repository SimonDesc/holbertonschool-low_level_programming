#include "main.h"
#include <stdio.h>
/**
 * _memcpy- Writee leing to uppercase
 * @dest: the string in main fonction
 * @src: second parameter
 * @n: the third parameter
 * Return: the string to copy
 */
char *_strchr(char *s, char c)
{
    int i;
    int k;
    int j;
    
    while (k < s[k])
    {
        k++;
    }
    
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            break;
        }
    }
    
    char n_tab[k];
    char *p_ntab;*
    
    p_ntab = n_tab;
    
    for (i; s[i] !='\0'; i++)
    {
       n_tab[j] = s[i];
       j++;
    }
    return (p_ntab);
}
