#include "main.h"

/**
 * _isdigit - checks digit
 * @c: number
 * Return: 0 (fail), 1 (success)
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
