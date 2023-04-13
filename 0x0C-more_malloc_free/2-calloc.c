#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemb: array
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int p;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (p = 0; p < nmemb * size; p++)
		ptr[p] = 0;

	return (ptr);
}
