#include "main.h"

/**
 *_islower - return 1 if lowercase, 0 else
 *@c:takeaint
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
