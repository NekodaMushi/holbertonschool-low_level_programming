#include "3-calc.h"

/**
 * main - calculator
 * @argc: argument counter
 * @argv: argument value
 * Return: 0 if Succeeded
 */
int main(int argc, char *argv[])
{
	int first_number, second_number, result = 0;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	first_number = atoi(argv[1]);
	second_number = atoi(argv[3]);

	result = func(first_number, second_number);

	printf("%d\n", result);

	return (0);
}
