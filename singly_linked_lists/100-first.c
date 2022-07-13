#include "lists.h"
void turtle(void) __attribute__((constructor));
/**
 * turtle - return before the main function is executed
 *
 */
void turtle(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
