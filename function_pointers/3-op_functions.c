#include "3-calc.h"

/**
 * op_add - returns sum of a and b.
 * @a: first int
 * @b: second int
 * Return: Sum of a and b
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between a and b
 * @a: first int
 * @b: second int
 * Return:  Difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply a and b
 * @a: first int
 * @b: second int
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division between a and b
 * @a: first int
 * @b: second int
 * Return: Quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
		printf("Error\n");
	return (a / b);
}
/**
 * op_mod - remainder of the modulo
 * @a: first int
 * @b: second int
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error");
	return (a % b);
}
