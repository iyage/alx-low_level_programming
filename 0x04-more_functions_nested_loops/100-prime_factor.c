#include <stdio.h>
/**
 * main - function to print largest prime factor
 * Return: return 0
 */
/*  */
int main(void)
{
long int numb = 612852475143;
int i = 2;
int j;
int prime;
int largest_prime = 0;
while (i <= numb)
{
if (numb % i == 0)
{
for (j = 2; j < i + 1; j++)
{
if (j == i)
{
prime = i;
numb =  numb / i;

if (prime > largest_prime)
{
largest_prime = prime;
break;
}
}
if (i % j == 0)
break;
}
}

i++;
}
printf("%d\n", largest_prime);
return (0);
}
