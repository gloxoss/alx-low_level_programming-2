#include "main.h"

int _sqrt_recursion(int n);
int _sqrt_sub(int n, int y);

/**
  * _sqrt_recursion - square root
  * @n: int
  * Return: int
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt_sub(n, 0));
}

/**
  * _sqrt_sub - sqrt
  * @n: int
  * @y: int
  * Return: int
  */
int _sqrt_sub(int n, int y)
{
	if (y * y == n)
		return (y);
	if (y == n / 2)
		return (-1);

	return (_sqrt_sub(n, y + 1));
}
