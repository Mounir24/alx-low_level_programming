#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if main> mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int index;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; min <= max; index++, min++)
		ptr[index] = min;

	return (ptr);
}
