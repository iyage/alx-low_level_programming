#include "main.h"
#include <stdio.h>
/**
 * _isupper - function to check letter case
 * @c: charater to check
 * Return: 1 if uppcase but 0 if not
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
