#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 *
 * @separator: the separator
 * @n: the numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *arg = va_arg(args, char*);

		if (arg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", arg);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
