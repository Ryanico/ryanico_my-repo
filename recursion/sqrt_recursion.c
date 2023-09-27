#include "main.h"
/*
 * sqrt_a - return natural square root
 * @a: number input
 * @b: iterator
 * Return: sqrt or -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - returns natural square root of number
 * @n: the input number
 * Return: natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
