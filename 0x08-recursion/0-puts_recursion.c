#include "main.h"
/**
 * 
 *
 */

void _puts_recursion(char *s)
{
int i = 0;
_putchar(s[i]);
i--;
if (s[i] == '\0') 
{
retrun;
}
_puts_recursion(s[i]);
}

