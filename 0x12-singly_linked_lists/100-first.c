#include <stdio.h>

/**
 * first - prints message before the main function
 *
 * Return: 0
 */

void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
