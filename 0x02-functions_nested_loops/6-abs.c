#include "main.h"

/**
 * _abs - compute absolute value of integer
 * @n: integer argument
 * Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
		return (0);
	else if (n < 0)
		return (-n);
	return (0);
}
