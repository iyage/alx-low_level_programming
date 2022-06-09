#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b)
{
if (b >= c)
{
largest = a;
}
else if (a >= c)
{
largest = a;
}
}
else if (b >= c)
{
if (c >= a)
largest = b;
else if (b >= a)
largest = b;
}
else if (c >= a)
{
if (a >= b)
largest = c;
else if (c >= b)
largest = c;
}
return (largest);
}
