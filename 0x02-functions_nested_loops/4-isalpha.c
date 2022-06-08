#include "main.h"
/**
 * _isalpha - function that check if number is negative or poitive
 * @n: integer to be checked for sign
 * Return:  return -1 or 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
return (1);
else 
return (0);

}
