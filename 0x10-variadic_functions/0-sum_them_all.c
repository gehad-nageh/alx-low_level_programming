#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: no of arguments
 * @...: the sum of integrs
 * Return: Nothing
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = 0, j = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (j--)
		i += va_arg(ap, int);
	va_end(ap);
	return (i);
}
