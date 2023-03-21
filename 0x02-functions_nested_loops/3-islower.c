#include "main.h"

/**
  * _islower - Entry point
  * Return: 1 when true, 0 when false
  */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
