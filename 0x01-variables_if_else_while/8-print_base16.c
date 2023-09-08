#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	char hexl = 'a';
	char hexn = '0';

	while (hexn <= '9')
	{
		putchar(hexn);
		hexn++;
	}
	while (hexl <= 'f')
	{
		putchar(hexl);
		hexl++;
	}
	putchar('\n');
	return (0);
}
