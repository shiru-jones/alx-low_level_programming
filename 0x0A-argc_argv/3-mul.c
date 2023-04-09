#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: argument
 * @argv: argument
 *
 * Return: always (0), Error (1)
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
}
