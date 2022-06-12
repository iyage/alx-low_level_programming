#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
unsigned long int a = 0;
unsigned long int b = 1;
unsigned long int c;
int i;
for (i = 0; i < 50; i++)
{
c = a + b;
a = b;
b = c;
if (i == 49)
printf("%ld", c);
else
printf("%ld, ", c);
}
printf("\n");
return (0);
}
