#include "main.h"

/**
 * _isalpha - a function tha checks a alphabetical charrecter
 *
 * @c: paremeter to be checked if it is an alphabetical charrecter
 *
 * Return: 1 if the charrecter is an alphabetical charrecter and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
