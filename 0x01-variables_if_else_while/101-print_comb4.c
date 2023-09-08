#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	int n = 0, n1 = 1, n2 = 2;

	while (n <= 8)
	{
		n1 = n + 1;
		while (n1 <= 9)
		{
			n2 = n1 + 1;
			while (n2 <= 9)
			{
				putchar(n + '0');
				putchar(n1 + '0');
				putchar(n2 + '0');
				if (n != 7 || n1 != 8 || n2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				n2++;
			}
			n1++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
