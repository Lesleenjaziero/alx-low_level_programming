#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns a sum of its parameters.
 *
 * @n: Constant int value.
 * @...: A variabal number of parameter.
 *
 * Return: Sum or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
