#include "main.h"

/**
* print_rev -> prints a string in reverse
* @rev: the string
*/

void print_rev(char *rev)
{
	int i, n;

	n = 0;
	while (rev[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(rev[i]);
	}
	_putchar('\n');
}
