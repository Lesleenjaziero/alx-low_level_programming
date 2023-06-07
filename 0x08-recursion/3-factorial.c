#include "main.h"

/**
 * factorial - A function that prints the factorial of a number
 *
 * @n: A given number
 *
 * Return: factorial or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
