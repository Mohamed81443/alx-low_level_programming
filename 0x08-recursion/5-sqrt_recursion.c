#include "main.h"
/**
 * helperfunction - checks
 * @num: number.
 * @psqrt: sqrt
 *
 * Return: sqrt
 */
int helperfunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperfunction(num, psqrt + 1));
	}
}
/**
 * _sqrt_recursion - func
 * @n: num
 *
 * Return: squar
 * -1 if n not sqr
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
