#include <stdio.h>
#include <stdbool.h>

/**
 * est_premier_recursif - test nombre premier
 * Vérifie si un nombre est premier de manière récursive en utilisant
 * une approche de force brute.
 *
 * @n: L'entier à tester.
 * @diviseur: Le diviseur actuellement testé.
 * Return: true si n est premier, false sinon.
 */
bool est_premier_recursif(int n, int diviseur)
{
	if (n == 1)
	{
		return (false);
	}
	else if (diviseur * diviseur > n)
	{
		return (true);
	}
	else if (n % diviseur == 0)
	{
		return (false);
	}
	else
	{
		return (est_premier_recursif(n, diviseur + 1));
	}
}

/**
 * is_prime_number - fonction du recoit n
 * Vérifie si un nombre est premier en appelant la fonction
 * est_premier_recursif avec le diviseur initial de 2.
 *
 * @n: L'entier à tester.
 * Return: true si n est premier, false sinon.
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else
	{
		return (est_premier_recursif(n, 2));
	}
}

