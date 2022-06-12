#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
unsigned long a = 0;
unsigned long  b = 1;
unsigned long c;
unsigned long sum = 0;
int i;
for (i = 0; i < 98; i++)
{
c = a + b;
a = b;
b = c;
if (c == 4000000)
break;
if (c % 2 == 0)
sum += c;
}
printf("%lu\n", sum);
return (0);
}
