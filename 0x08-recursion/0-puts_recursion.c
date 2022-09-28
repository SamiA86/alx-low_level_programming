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
if (*(s + i) == '\0') 
{
_putchar('\n');
return;
}
_puts_recursion(*(s + i));
}

