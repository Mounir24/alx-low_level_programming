#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	int i, cx = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[cx++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[cx++] = s2[i];

	return (concat_str);
}
