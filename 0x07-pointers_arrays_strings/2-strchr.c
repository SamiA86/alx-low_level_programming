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
char *ptr;
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
ptr = &s[i];
return (ptr);
}
i++;
}
return (0);
}

