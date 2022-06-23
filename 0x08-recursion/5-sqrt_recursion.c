#include "main.h"
/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */
int _sqrt(int n, int x)
{
if (n > x / 2)
return (-1);
else if (n * n == x)
return (n);
return (_sqrt(n + 1, x));
}
/**
 * _sqrt_recursion - find the square root of a number
 * @n: square root of number found
 * Return: integer
 */
int _sqrt_recursion(int n)
{
if (n == 1 || n == 0)
return (n);
return (_sqrt(0, n));
}
