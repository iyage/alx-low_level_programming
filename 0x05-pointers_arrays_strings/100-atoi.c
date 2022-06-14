#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 *_atoi - function to convert string to int
 * @s: string
 * Return: return an integer
 */

int _atoi(char *s)
{
int num_sign = 1;
int intVal = 0;

do {
if (*s == '-')
num_sign *= -1;
else if (*s >= '0' && *s <= '9')
intVal = intVal * 10 + (*s - '0');
else if (intVal > 0)
break;
} while (*s++);
intVal *= num_sign;
return (intVal);
}
