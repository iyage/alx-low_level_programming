#include "main.h"
/**
 * _islower - function that check if a character is lower case or not
 * @n: integer to be checked for sign
 * Return:  return -1 or 1 or 0
 */
int print_sign(int n)
{
if (n < 0){
    _putchar('-');
    _putchar(',');
    return (-1);
}
else if (n > 0)
{
    _putchar('+');
    _putchar(',');
    return (1);
}
else
{
    _putchar(0);
    _putchar(',');
    return (0);
}
}
