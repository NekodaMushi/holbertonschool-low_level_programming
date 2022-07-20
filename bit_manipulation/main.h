#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

/*Functions Prototype from this project:*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

/*Function created before*/
int _putchar(char c);

#endif
