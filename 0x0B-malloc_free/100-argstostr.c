#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * argstostr - concate args
  * @ac: int
  * @av: char**
  * Return: char*
  */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	str = malloc((sizeof(char) * size) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
