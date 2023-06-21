#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - program that prints the opcodes of its own main function.
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: nothing.
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 if successful, 1 if number of arguments is incorrect,
 * 2 if number of bytes is negative
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
