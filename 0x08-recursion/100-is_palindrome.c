#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - func
 * @s: string
 *
 * Return: 1 
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * check_pal - func
 * @s: str
 * @i: iter
 * @len: leng
 *
 * Return: 1
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1)
			return (check_pal(s, i +1, len - 1));
}
