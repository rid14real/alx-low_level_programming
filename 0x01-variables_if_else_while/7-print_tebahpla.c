#include <stdio.h>

/**
 * main - Prints alphabets in reverse order
 *
 * Result: Always (Success)
 **/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
