#include "main.h"
#include "string.h"
/**
 *factorial - function to print factorial
 *@n: factorial size
 */
int factorial(int n)
{
int num
if (n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
num = factorial(n - 1);
return (n * num);
}
