#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input int
 * @val: square root value
 * Return: Nothing
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function that finds the sqare root
 * @n: input int
 * @val: the calue of the square root
 * Return: Nothing
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
