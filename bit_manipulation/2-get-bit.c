#include "main.h"

/**
 * get_bit - La fonction get_bit retourne la valeur
 * d'un bit à un index donné dans un nombre n.
 * Paramètres :
 * @n : le nombre dont on souhaite récupérer la valeur du bit
 * @index : l'index du bit que l'on souhaite récupérer, en commençant par 0
 *
 * Return: la valeur du bit à l'index indiqué, ou -1 en cas d'erreur.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Si l'index est supérieur à 64, retourne -1 pour signaler une erreur */
	if (index > 64)
	{
		return (-1);
	}

	/**
	 * Effectue un décalage de n vers la droite de index positions,
	 * puis réalise
	 * un ET logique avec 1 pour obtenir la valeur du bit à l'index voulu.
	 * Retourne cette valeur.
	 */
	return ((n >> index) & 1);
}

