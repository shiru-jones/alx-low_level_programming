#include "main.h"
/**
 * _strspn - gets lenght of a prefix substring
 * @s: substring
 * @accept: substring of characters accpted
 * Return: of occurence lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
