#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: generated password
 */

int main(void)
{
srand(time(0));
int lower = 32;
int upper = 126;
    int num;
for(int i = 0; i<32; i++)
    {
num = (rand()%(upper - lower + 1) + lower );
printf("%c", num);
    }
putchar(10);
return 0;
}