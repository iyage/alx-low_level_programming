#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_to_98  - function that print lower case alphabet
 */
void decrement(int n)
{
while (n >= 98)
{
if (n < 0)
{
int tmp = -1 * n;
if (tmp > 9 && tmp <= 99)
{
int tmp1 = tmp / 10;
int tmp2 = tmp % 10;
_putchar('-');
_putchar(tmp1 + '0');
_putchar(tmp2 + '0');
_putchar(',');
_putchar(' ');

}
else if (tmp > 99)
{
int tmp1 = tmp / 100;
int tmp2 = tmp % 100;
int tmp3 = tmp2 / 10;
int tmp4 = tmp2 % 10;
_putchar('-');
_putchar(tmp1 + '0');
_putchar(tmp3 + '0');
_putchar(tmp4 + '0');
_putchar(',');
_putchar(' ');

}
else
{
_putchar('-');
_putchar(tmp + '0');
_putchar(',');
_putchar(' ');
}
n++;
}
else
{
if (n > 9 && n <= 99)
{
int tmp1 = n / 10;
int tmp2 = n % 10;
_putchar(tmp1 + '0');
_putchar(tmp2 + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
else if (n > 99)
{
int tmp1 = n / 100;
int tmp2 = n % 100;
int tmp3 = tmp2 / 10;
int tmp4 = tmp2 % 10;
_putchar(tmp1 + '0');
_putchar(tmp3 + '0');
_putchar(tmp4 + '0');
_putchar(',');
_putchar(' ');

}

else
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
n--;
}
}  
}


void increment(int n)
{
while (n <= 98)
{
if (n < 0)
{
int tmp = -1 * n;
if (tmp > 9 && tmp <= 99)
{
int tmp1 = tmp / 10;
int tmp2 = tmp % 10;
_putchar('-');
_putchar(tmp1 + '0');
_putchar(tmp2 + '0');
_putchar(',');
_putchar(' ');

}
else if (tmp > 99)
{
int tmp1 = tmp / 100;
int tmp2 = tmp % 100;
int tmp3 = tmp2 / 10;
int tmp4 = tmp2 % 10;
_putchar('-');
_putchar(tmp1 + '0');
_putchar(tmp3 + '0');
_putchar(tmp4 + '0');
_putchar(',');
_putchar(' ');

}
else
{
_putchar('-');
_putchar(tmp + '0');
_putchar(',');
_putchar(' ');
}
n++;
}
else
{
if (n > 9 && n <= 99)
{
int tmp1 = n / 10;
int tmp2 = n % 10;
_putchar(tmp1 + '0');
_putchar(tmp2 + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
else if (n > 99)
{
int tmp1 = n / 100;
int tmp2 = n % 100;
int tmp3 = tmp2 / 10;
int tmp4 = tmp2 % 10;
_putchar('-');
_putchar(tmp1 + '0');
_putchar(tmp3 + '0');
_putchar(tmp4 + '0');
_putchar(',');
_putchar(' ');

}

else
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
n++;
}
}  
}




void print_to_98(int n)
{
if (n < 98)
{
increment(n);
}
else if (n > 98)
decrement(n);
_putchar('\n');
}
