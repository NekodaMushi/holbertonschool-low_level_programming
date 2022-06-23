#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: s2
 */
char *str_concat(char *s1, char *s2)
{
	char *rtn = malloc(strlen(s1) + strlen(s2) + 1);
	int p, q = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (rtn == NULL)
	{
		return (NULL);
	}
	for (p = 0; (rtn[q] = s1[p]) != '\0'; ++p, ++q)
	{
	}
	for (p = 0; (rtn[q] = s2[p]) != '\0'; ++p, ++q)
	{
	}
	return (rtn);
}
