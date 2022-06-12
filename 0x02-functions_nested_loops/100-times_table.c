#include "main.h"
#include <stdio.h> 
/**
 * print_times_table  - function that print times table up to n
 * @n: times table
 */
void print_times_table(int n)
{
int num, mul, result;
if (n < 0 || n > 15)
{

}
else
{
for (num = 0; num <= n; num++)
{
for (mul = 0; mul <= n; mul++)
{
result = num * mul;
if (mul != n)
printf(" %d, ", result);
else
printf("%d", result);
}
printf("\n");
}

}
}
