#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string separator
 * @n: no of arguments
 * @...: string to print
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *string;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (string = va_arg(ap, char *)) ? string : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
