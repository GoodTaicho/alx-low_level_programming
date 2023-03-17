#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase expect 'e' and 'q'
 * Return: Always 0 (Success)
 */
	int main(void)
{
		char c;

		c = 'a';
		while (c <= 'z')
	{
			if (c != 'q' && c != 'e')
			putchar(c);
			c++;
	}
		putchar('\n');
	return (0);
}
