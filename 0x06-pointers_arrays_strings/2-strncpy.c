#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of charrecters copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
