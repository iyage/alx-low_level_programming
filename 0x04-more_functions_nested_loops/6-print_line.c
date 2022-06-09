#include "main.h"
#include <stdio.h>
/**
 * print_line - function to print line base on input
 * @n:input
 */
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
