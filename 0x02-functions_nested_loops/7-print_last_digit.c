#include "main.h"
/**
 * print_last_digit - function that print last digit of number
 * @n: last digit of n is printed
 * Return:  last digit of n
 */
int print_last_digit(int n)
{
int tmp = n % 10;
if (tmp < 0)
{
tmp *= -1;
_putchar(tmp + '0');
return (tmp);
}
else
{
_putchar(tmp + '0');
return (tmp);
}
}
