#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	int n = 0, n1 = 1;

	while (n <= 8)
	{
		n1 = n + 1;
		while (n1 <= 9)
		{
			putchar(n + '0');
			putchar(n1 + '0');
			if (n != 8 || n1 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			n1++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
