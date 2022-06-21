#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - check the code
 *@a: array
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
for (; i < 8; i++)
{
int j = 0;
for (; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar(10);
}

}
