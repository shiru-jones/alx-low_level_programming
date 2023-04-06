#include "main.h"
/**
 * int factorial - returns factorial of  a number n
 * @n: the given number
 *
 * description: the function that returns the factorial of a given number n.
 * if n is less than zero return is -1
 * if n is 0 the retirn is 1
 *
 * Return: factorial(n)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
