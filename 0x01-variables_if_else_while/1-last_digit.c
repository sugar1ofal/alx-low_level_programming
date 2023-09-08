#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	printf("Last digit of %d is %d and is ", n, ld);
	if (ld == 0)
	{
		printf("0\n");
	}
	else if (ld > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}

