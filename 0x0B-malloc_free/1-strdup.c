#include "main.h"
#include <stdlib.h>

/**
* _strdup - a function that copies a string
* @str: string
* Return: returns a pointer to a newly allocated space in memonry
* which contains a duplicate of the given string
*/
char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *newStr;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; ; i++)
	{
		c++;
		if (str[i] == '\0')
			break;
	}

	newStr = (char *) malloc(c * sizeof(char));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
	{
		newStr[i] = str[i];
	}
	return (newStr);
}
