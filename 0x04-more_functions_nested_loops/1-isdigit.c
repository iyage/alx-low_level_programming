#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function if input is number
 * @c: input to check
 * Return: 1 if digit but 0 if not
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}