#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 *
 * @n: numbers of parameters.
 * @separator: separator between numbers
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
}
