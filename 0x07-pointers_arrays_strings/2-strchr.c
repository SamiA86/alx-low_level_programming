#include "main.h"
/**
 * _strchr -> string character
 *
 * @s: string given
 * @c: another char
 * Return: a string
 */

char *_strchr(char *s, char c)
{
int a;
for (a =0; *(s + a); a++)
{
a = *s++;
if (s + a) == c)
{
return (s + a);
}
}
if (a == 0)
{
return (NULL);
}
}
