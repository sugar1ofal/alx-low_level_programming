#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	int n = 0, n1 = 1;

	while (n <= 99)
	{
		n1 = n + 1;
		while (n1 <= 99)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(n1 / 10 + '0');
			putchar(n1 % 10 + '0');
			if (n != 98 || n1 != 99)
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
