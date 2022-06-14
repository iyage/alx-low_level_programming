
#include <stdio.h>
#include <string.h>
/**
 *rev_string -  function to reverse string
 * @s: string
 */

void rev_string(char *s)
{
int l, i;
char *start_add;
char *end_add;
char ch;
l = strlen(s);
start_add = s;
end_add = s;
for (i = 0; i < l - 1; i++)
end_add++;
for (i = 0; i < l / 2; i++)
{
ch = *end_add;
*end_add = *start_add;
*start_add = ch;
start_add++;
end_add--;
}
}
