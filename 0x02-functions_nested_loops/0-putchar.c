#include "main.h"
	#include <unistd.h>
	/**
	 * _putchar - writes the character c to stdout
	 * 
	 *
	 * Return: 1 On success
	 * On error, 1 is returned, and error is set appropriately.
	 */
 int _putchar(char a)
{
 return (write(1, &a, 1));
}
