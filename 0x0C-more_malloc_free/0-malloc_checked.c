#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory
 * @b: string
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
