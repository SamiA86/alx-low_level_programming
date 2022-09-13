#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints to 98
 *
 * @n: the starting point
 */

void print_to_98(int n)
{
while (n <= 98)
{
printf("%d", n);
n = n + 1;
}
printf("\n");
while (n >= 98)
{
printf("%d", n)
n = n - 1;
}
printf("\n", n);
}
