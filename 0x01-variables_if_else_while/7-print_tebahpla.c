#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
