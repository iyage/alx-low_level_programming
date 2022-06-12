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
int i;
for (i = 0; i < 98; i++)
{
c = a + b;
a = b;
b = c;
if (i == 97)
printf("%lu", c);
else
printf("%lu, ", c);
}
printf("\n");
return (0);
}
