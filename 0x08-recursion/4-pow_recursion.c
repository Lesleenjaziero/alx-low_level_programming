#include "main.h"

/**
 * _pow_recursion - A function that raises value x to power y
 *
 * @x: Value
 * @y: Power
 *
 * Return: x raised to power y or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
