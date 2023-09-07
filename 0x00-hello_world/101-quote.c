#include <unistd.h>

/**
 * sugar - Entry point for the write command
 *
 * Description: This function prints a message.
 *
 * Return: 1 on success. Error code otherwise
 */
int sugar(void)
{
	putchar("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}

/**
 * main - Entry point for me
 *
 * Return:  1 means sucess else error
 */
int main(void)
{
	sugar();
	return (1);
}
