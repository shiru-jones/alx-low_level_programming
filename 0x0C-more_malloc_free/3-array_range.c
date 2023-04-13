#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: array
 * @max: array
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int count, a;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	ptr = malloc(sizeof(int) * count);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < count; a++, min++)
		ptr[a] = min;

	return (ptr);
}
