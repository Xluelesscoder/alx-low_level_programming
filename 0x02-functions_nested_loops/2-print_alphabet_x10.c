 #include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char c;

	int i;

	i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}

