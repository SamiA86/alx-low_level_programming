include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings using at
 *
 * most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = 0, j = 0, l = 0, k = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
if (n >= j)
{
l = i + j;
}
if (n < j)
{
l = i + n;
}
s = (char *)malloc(sizeof(char) * l + 1);

if (s == NULL)
return (NULL);
j = 0;
while (k < l)
{
if (k < i)
s[k] = s1[k];
if (k >= i)
{
s[k] = s2[j];
j++;
}
k++;
}
s[k] = '\0';
return (s);
}


