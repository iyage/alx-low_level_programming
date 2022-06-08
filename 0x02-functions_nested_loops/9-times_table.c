/**
 * times_table  - function that print times table up to 9
 */
void times_table(void)
{
int num, mul, result;
for (num = 0; num <= 9; num++)
{
for (mul = 0; mul <= 9; mul++)
{
result = num * mul;
if (result > 9)
{

_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
if (mul != 9)
_putchar(',');
_putchar(' ');
}
else
{
_putchar(num * mul + '0');
if (mul != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
