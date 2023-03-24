#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * lettre - Affiche un caractère
 * @c: argument de type va_list contenant le caractère à afficher
 *
 * Return: rien
 */
void lettre(va_list c)
{
	int a = va_arg(c, int);

	printf("%c", a);
}

/**
 * nombre - Affiche un entier
 * @i: argument de type va_list contenant l'entier à afficher
 *
 * Return: rien
 */
void nombre(va_list i)
{
	int a = va_arg(i, int);

	printf("%d", a);
}

/**
 * mot - Affiche une chaîne de caractères
 * @c: argument de type va_list contenant la chaîne de caractères à afficher
 *
 * Return: rien
 */
void mot(va_list c)
{
	char *string;

	string = va_arg(c, char*);
	if (string == NULL)
	{
		string = "(nil)";
	}

	printf("%s", string);
}

/**
 * flottant - Affiche un nombre à virgule flottante
 * @f: argument de type va_list contenant le nombre à afficher
 *
 * Return: rien
 */
void flottant(va_list f)
{
	double a = va_arg(f, double);

	printf("%f", a);
}

/**
 * print_all - Affiche une liste d'arguments de différents types
 * @format: chaîne de formatage spécifiant le type de chaque argument
 *            ('c' pour un caractère, 'd' pour un entier,
 *            's' pour une chaîne de caractères, 'f' pour un nombre
 *            à virgule flottante)
 *           Les arguments sont donnés en suivant la chaîne de formatage
 *
 * Return: rien
 */
void print_all(const char * const format, ...)
{
	unsigned int i, y;
	char *s;
	va_list arg;

	my_struct typ[] = {
		{"c", lettre},
		{"f", flottant},
		{"i", nombre},
		{"s", mot},
		{'\0', NULL}
	};

	i = 0;
	y = 0;

	s = "";

	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		while (typ[y].op)
		{
			if (format[i] == *typ[y].op)
			{
				printf("%s", s);
				typ[y].f(arg);
				s = ", ";
			}
			y++;
		}
		i++;
		y = 0;
	}
	printf("\n");
	va_end(arg);
}

