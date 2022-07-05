#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/*Function created before*/
int _putchar(char c);

/*Functions Prototype from this project:*/
int sum_them_all(const unsigned int n, ...);
void print_all(const char *const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_char_pointer(va_list args);

/**
 * struct search_type - struct type
 * @type: char's format
 * @f: function pointer
 *
 */

typedef struct search_type
{
	char *type;
	void (*f)(va_list);
} search_type_st;

#endif
