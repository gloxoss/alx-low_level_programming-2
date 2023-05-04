#include "main.h"

/**
  * binary_to_uint - binary to uint
  * @b: const char*
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	char c;

	if (!b)
		return (0);
	while ((c = *b++))
	{
		if (c < '0' || c > '1')
			return (0);
		uint = (uint << 1) | (c - '0');
	}
	return (uint);
}
