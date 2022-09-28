#include "main.h"
/**
 * _strlen_recursion -> function to get length of string
 * @s: string param
 * Return: length of string
 */

int _strlen_recursion(char *s)
{	
int i = 0;
if (*s == '\0')
return (0);
s++;
i++;
_strlen_recursion(s);
return (i + 1);
}
