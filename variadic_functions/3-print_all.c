#include "variadic_functions.h"

/**
 * print_all - print anything
 *
 * @format: numbers of parameters
 *
 * Return: Nothing
 */

void print_all(const char *const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *sep;

	search_type_st storage[] = {
		{"c", print_char},
		{"f", print_float},
		{"s", print_char_pointer},
		{"i", print_int},
		{NULL, NULL}

	};

	i = 0;
	sep = "";
	va_start(args, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", sep);
			storage[j].f(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * _printchar - print char
 * @list: list to print
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_strings - print string type
 * @list: list to print
 */

void print_char_pointer(va_list list)
{
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_float - print float type
 * @list: list to print
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_numbers - print int type
 * @list: list to print
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
