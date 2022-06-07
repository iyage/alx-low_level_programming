#include <unistd.h>
#include <stdio.h>
/* more headers goes there */

/**
 * _putchar - Entry point
 *
 * print_alphabet - function that print lower case alphabet
 * 
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
