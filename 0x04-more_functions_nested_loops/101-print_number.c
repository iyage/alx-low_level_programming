#include "main.h"

/**
* print_number - Prints a number using recursion
* @n: The number to print
*/
void print_number(int n)
{
unsigned int numb = n;
if (n < 0)
{
_putchar('-');
		numb = -numb;
}
if (numb > 9)
{
_print_number(numb / 10);
}
_putchar(numb % 10 + '0');
}
