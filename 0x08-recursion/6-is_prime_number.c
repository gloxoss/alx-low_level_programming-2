#include "main.h"

/**
  * is_prime_number - is prime number? 1 or 0
  * @n: int
  * Return: int
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_sub(n, 2));
}

/**
  * prime_sub - sub of is_prime_number
  * @n: int
  * @r: int
  * Return: int
  */
int prime_sub(int n, int r)
{
	if (r < n)
	{
		if (n % r == 0)
			return (0);
		return (prime_sub(n, r + 1));
	}
	return (1);
}
