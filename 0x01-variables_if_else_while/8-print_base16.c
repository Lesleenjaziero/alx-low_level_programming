#include <stdio.h>

/**
 * main - Hexadecimal printing program
 *
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = '0' ; x <= '9' ; x++)
		putchar(x);
	for (x = 'a' ; x <= 'f' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}

