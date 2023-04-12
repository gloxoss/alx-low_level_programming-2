#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * create_array - create array of chars with initialization
  * @size: unsigned int
  * @c: char
  * Return: char
  */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = (char *)malloc(size);

	if (str == NULL)
	{
		return (NULL);
	}

	memset(str, c, size);
	return (str);
}
