#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - main function
  *@str : the car that will have the size
  *Return: character
  */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}

	ptr = malloc(1 + (j * sizeof(*str)));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			ptr[i] = str[i];
		}
	}

	return (ptr);
}

