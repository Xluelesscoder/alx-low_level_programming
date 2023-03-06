#include "main.h"
/**
 * _memset - fills memory constant byte
 *
 * @s: memory area pointed to by s
 *
 * @b: the constant byte b
 *
 * @n: the first n byte
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
