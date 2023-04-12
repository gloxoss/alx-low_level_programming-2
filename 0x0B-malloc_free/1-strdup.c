#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - get pointer to new allocated space
  * @str: char*
  * Return: char*
  */
char *_strdup(char *str)
{
	char *sp;
	unsigned int i, j  = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}

	sp = malloc(sizeof(char) * (j + 1));

	if (sp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		sp[i] = str[i];
	}

	sp[j] = '\0';
	return (sp);
}
