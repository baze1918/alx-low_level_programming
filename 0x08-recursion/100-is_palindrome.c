#include "main.h"

/**
 * _strlen_recursion - returns the length of string.
 * @s: string
 * Return: the length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * Comparator - Compares each character of string.
 * @s: string
 * @n1: the smallest iterator.
 * @n2: the biggest iterator.
 * Return: no.
 */

int Comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + Comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects of a string is a palindrome.
 * @s: String
 * Return: 1 if S is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (Comparator(s, 0, _strlen_recursion(s) - 1));
}
