#include "main.h"
/*
 * _strlen_recursion - string length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/*
 * compare_string - compare string characters
 * @s: string
 * @left: smallest iterator
 * @right: largest iterator
 * Return: int
 */
int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/*
 * is_palindrome - detect if string is palindrome
 * @s: the string for testing
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
