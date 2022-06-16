#include <string.h>
#include <stdio.h>
/**
 * _strncpy - concatenation function
 * @dest: destination string
 * @src: string to copy
 * @n: size
 * Return: char* pointer is return;
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
*(dest + i) = *src++;

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
