#include <stdio.h>

/**
 *main -Entry point Program that prints size of various types on data types
 *Return: 0
*/

int main(void)
{

printf("Size of a char : %lubyte(s)\n", (unsigned long) sizeof(char));
printf("Size of an int : %lubyte(s)\n", (unsigned long) sizeof(int));
printf("Size of a long int : %lubyte(s)\n", (unsigned long) sizeof(long int));
printf("Size of a long long int : %lubyte(s)\n", (unsigned long) sizeof(long long int));
printf("Size of a float : %lubyte(s)\n", (unsigned long) sizeof(float));
return (0);
}
