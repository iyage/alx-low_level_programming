#include "main.h"
#include "string.h"
/**
 *  _print_rev_recursion - function to print char in reverse order
 *@s: char string to print
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
