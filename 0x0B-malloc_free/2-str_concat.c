#include "main.h"
#include <stdlib.h>
/**
 *str_concat-> concatinates the strings
 *@s1:destination string arrgument
 *@s2:source string argument
 *Return: pointer to concatinated string
 */
char *str_concat(char *s1, char *s2)
{
int len = 0, j, i;
char *NS;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len])
len++;
for (i = 0; s2[i] != 0; i++)
{
s1[len] = s2[i];
len += 1;
}
NS = (char *)malloc(sizeof(char) * (len - 1) + 1);
if (NS == NULL)
{
return (NULL);
}
for (j = 0; j < len - 1; j++)
{
	NS[j] = s1[j];
}

s1[j] = '\0';
return (NS);
}
