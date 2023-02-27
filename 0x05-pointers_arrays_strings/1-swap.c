#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 *
 * @a: first value
 * @b: second value
 *
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

