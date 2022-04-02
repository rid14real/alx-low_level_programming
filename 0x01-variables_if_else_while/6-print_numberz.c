#include <stdio.h>

/**
 * main - Prints base 10 numbers starting from 0
 *
 * Return: Always (Success)
 **/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
