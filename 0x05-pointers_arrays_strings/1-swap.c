/**
 * swap_int - a function that swap two number
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
int tmp  = *b;
*b = *a;
*a = tmp;
}
