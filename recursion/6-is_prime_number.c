#include <stdio.h>
#include <stdbool.h>

bool est_premier_recursif(int n, int diviseur)
{
    if (n == 1) {
        return false;
    }
    else if (diviseur * diviseur > n) {
        return true;
    }
    else if (n % diviseur == 0) {
        return false;
    }
    else {
        return est_premier_recursif(n, diviseur + 1);
    }
}

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
    return est_premier_recursif(n, 2);
}

