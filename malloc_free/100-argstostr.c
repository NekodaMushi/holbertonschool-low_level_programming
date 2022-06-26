#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - function that concatenates all the arguments
 * @ac: argc
 * @av: argv
 * Return: Always 0 if succeeded
 **/

char *argstostr(int ac, char **av)
{

	int i;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);

	return (0);
}
