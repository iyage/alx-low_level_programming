#include "main.h"
/**
 *_prime- returns the square root of a number
 * @n: test number
 * @x: number
 *
 * Return: the square root of n
 */
int _prime(int x, int n)
{
if (x <= 1)
return (1);
else if (n % x == 0)
return (0);
return (_prime(x - 1, n));
}
/**
 *is_prime_number - check if a number is prime
 * @n: number to check
 * Return: integer
 */
int is_prime_number(int n)
{
int x = n / 2;
if (n == 1 || n == 0)
return (0);
return (_prime(x, n));
}
