#include "main.h"
/**
 * prime_number - entry point
 *  @x:int
 *  @y:int
 *  Return:int
 */
int prime_number(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (prime_number(x + 1, y));
}

/**
 * is_prime_number - states if a number is prime number
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_number(2, n));
}
