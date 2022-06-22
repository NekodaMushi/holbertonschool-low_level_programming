#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: number of command line arguments.
 * @argv: array containing the prog cmd line arguments.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}
