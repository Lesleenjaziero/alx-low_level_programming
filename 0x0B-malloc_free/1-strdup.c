#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *p;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		p[r] = str[r];

	return (p);
}
