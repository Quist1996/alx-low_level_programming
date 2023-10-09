#include <stdio.h>

/*
 * main - Entry point for the program
 *
 * Description: This function prints the sizes of various data types in bytes.
 *
 * Return: Always 0 (Success)
 /* This program prints the sizes of various data types in bytes. */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("%lu byte(s)\n", (unsigned long)sizeof(c)); /* Corr size of long int */
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("%lu byte(s)\n", (unsigned long)sizeof(f)); /* Corr size of float */

return (0);
}
