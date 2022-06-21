#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest:  destination memory
 * @src: source memory
 * @n: number of bytes to be copied
 * Return: pointer to the copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i=0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
