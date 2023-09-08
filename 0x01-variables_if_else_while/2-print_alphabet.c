#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
