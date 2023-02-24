#include "main.h"
/**
 *print_triangle - print a triangle
 *@size: size of triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int diez;
	int largeur;
	int hauteur;

	for (hauteur = 1; hauteur <= size; hauteur++)
	{
		for (largeur = hauteur; largeur < size; largeur++)
		{
			_putchar(' ');
		}

		for (diez = 1; diez <= hauteur; diez++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
