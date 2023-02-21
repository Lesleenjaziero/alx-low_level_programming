#include "main.h"

/**
 * main - program that prints without the use of standard libary
 *
 * Return: always 0
 */

int main(void)
{
	char *s = "_putchar\n";

	while (*s)
	{
		_putchar(*s++);
	}

		return (0);
}
