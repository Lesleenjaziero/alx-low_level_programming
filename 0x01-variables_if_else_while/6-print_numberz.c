#include <stdio.h>

/**
 * main - numberz program
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0, b = 9;

	while (a <= b)
	{
		putchar(a + '0');
		a++;
	}

	putchar('\n');

	return (0);
}
