#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
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
