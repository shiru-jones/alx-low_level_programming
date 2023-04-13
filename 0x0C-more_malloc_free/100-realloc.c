#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc -  function that reallocates a memory block
 * @ptr: pointer
 * @old_size: input old
 * @new_size: input new
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest, *src;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);

	src = ptr;

	for (a = 0; a < new_size && a < old_size; a++)
		dest[a] = src[a];
	free(ptr);

	return (dest);
}
