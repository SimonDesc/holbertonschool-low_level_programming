#ifndef _Variadic_
#define _Variadic_

#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct my_struct
{
	char *op;
	void (*f)(va_list);
} my_struct;
#endif
