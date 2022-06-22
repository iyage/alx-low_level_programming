#include "main.h"
#include "string.h"
/**
 * _pow_recursion - function to print power of number
 *@x: base
 *@x: index
 *Return: intger value
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
