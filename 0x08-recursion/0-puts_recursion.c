#include "main.h"
/**
 * _puts_recursion -> this is a function to print string recursivly
 *
 * @s: string paramenter
 */

void _puts_recursion(char *s)
{
_putchar(*s);
++s;
if (*s == '\0') 
{
_putchar('\n');
return;
}
_puts_recursion(s);
}

