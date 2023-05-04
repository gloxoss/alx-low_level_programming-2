#include "main.h"

/**
  * set_bit - set bit at index
  * @n: unsigned long int*
  * @index: unsigned int
  * Return: int
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
