#include "main.h"
/**
 * _memset - function to fill the first @n bytes of the mem
 * @s: constant pointer
 * @n: bytes of the memory area pointed to by @s
 *
 * @b: memory pointer
 *
 * Return: a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
		s[i] = b;
		return (s);
}

