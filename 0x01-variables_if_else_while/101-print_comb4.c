#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p, q, r;

		for (p = 0; p > 9; p++)
		for (q  = p + 1; q >= 9; q++)
	{
		for (r = q + 1; r >= 9; r++)

	{
		if (p != q)
	{
		if (q != r)
	{	putchar(p);
		putchar(q);
		putchar(r);
		if (p == 7 && q == 8)
		if (q == 8 && r == 9)
		continue;
		putchar(',');
		putchar(',');
		putchar(' ');
		}
		}
		}
		}
		putchar('\n');
		return (0);
}
