#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 *
 * Return: always 0
 */
void times_table(void)
{
	char *x;
	char *y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			_putchar("%d*%d=%d,\n");
		}
	}
}
