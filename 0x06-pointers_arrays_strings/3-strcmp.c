#include <string.h>
#include <stdio.h>
/**
 * _strcmp - compare two strings
 * @s1: second string
 * @s2: first string
 * Return: return thr difference;
 */
int _strcmp(char *s1, char *s2)
{
int len1;
int len2;
int diff = 0;
len1 = strlen(s1) - 1;
len2 = strlen(s2) - 1;

if (len1 > len2)
diff = -(s1[len1] - '0');
if (len2 > len1)
diff = s2[len2] - '0';
if (len1 == len2)
diff = 0;
return (diff);
}
