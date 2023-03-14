#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*len - returns length of str
*@str: string counted
*Return: returns the length
*/
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}

	return (len);
}


/**
* argstostr - a function that concatenates all the arguments of your program
*@agc: count of args passed to the function
*@agv:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int agc, char **agv)
{
	char *new_string = NULL;
	int i = 0, j = agc, n, sum = 0, tmp = 0;

	if (agc == 0 || agv == NULL)
		return (NULL);

	while (agc--)
	{
		sum += (len(agv[agc]) + 1);
	}

	new_string = malloc(sizeof(char) * (sum + 1));

	if (new_string == NULL)
		return (NULL);

	while (i < j)
	{
		for (n = 0; agv[i][n] != '\0'; n++)
		{
			new_string[n + tmp] = agv[i][n];
		}

		new_string[tmp + n] = '\n';
		tmp += (n + 1);
		i++;
	}

	new_string[tmp] = '\0';

	return (new_string);
}
