#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @n: number of arguments
 * @separator: character separator of numbers
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *sr;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		sr = va_arg(string, char *);
		if (sr == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", sr);
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
