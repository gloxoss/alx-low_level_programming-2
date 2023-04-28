#include "main.h"

/**
 * palindrome_checker - checks if a string is a palindrome
 * @s: char*
 * @len: int
 * @i: int
 * Return: int
 */
int palindrome_checker(char *s, int len, int i);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: char*
 * Return: int
 */
int is_palindrome(char *s)
{
	int len, i = 0;

	len = _strlen_recursion(s);
	if (*s == '\0')
		return (1);
	return (palindrome_checker(s, len, i));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: char*
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * palindrome_checker - checks if a string is a palindrome
 * @s: char*
 * @len: int
 * @i: int
 * Return: int
 */
int palindrome_checker(char *s, int len, int i)
{
	if (i >= len / 2)
		return (1);
	if (s[i] != s[len - i - 1])
		return (0);
	return (palindrome_checker(s, len, i + 1));
}
