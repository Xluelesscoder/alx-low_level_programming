#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
