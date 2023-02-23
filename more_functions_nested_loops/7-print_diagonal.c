#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *followed by a new line.
 *@n: number of diagonal to draw
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int nbre_boucle, nbre_espace;

	for (nbre_boucle = 0; nbre_boucle < n; nbre_boucle++)
	{
		_putchar('\n');
		if (nbre_boucle > 0)
		{
			for (nbre_espace = 0; nbre_espace < nbre_boucle; nbre_espace++)
			{
				_putchar(32);
			}

		}

		_putchar('\\');
	}
}
