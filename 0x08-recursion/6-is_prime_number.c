#include "main.h"
/**
 * helperfunction - func
 * @num: number
 * @i: possible
 *
 * Return: 0 or 1
 */
int helperfunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperfunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - func
 * @n: number
 *
 * Return: 1 if number is prime.
 * 0 not.
 */
int is_prime_number(int n)
{
	if (n <= i)
	{
		return (0);
	}
	else
	{
		return (helperfunction(n, 2));
	}
}
