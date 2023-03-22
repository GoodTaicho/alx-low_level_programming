#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 2, c, i;
	{
	printf("%d, %d, ", a, b);
	}
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("%d\n", a + b);
	return (0);
}