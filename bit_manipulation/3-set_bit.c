#include "main.h"
/**
 * set_bit- set the value of a bit to 1 at a given index
 *
 * @n: the value
 * @index: the index
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Vérifier si l'index est dans la plage valide */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	mask = 1UL; /* Initialiser le masque à 1 (unsigned long int) */

	/* Décaler le masque vers la gauche de "index" positions */
	mask = mask << index;

	/* Mettre à 1 le bit à la position "index" en utilisant le masque */
	*n = *n | mask;

	return (1);
}

