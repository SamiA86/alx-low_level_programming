#include "main.h"
#include <stdlib.h>
/**
 * _strdup-> duplicate the string
 * @str: string arrgument
 * Return: teh string pointer for duplicated one
 */
char *_strdup(char *str)
{
int i = 0;
int j;
char *NS;
if (str == NULL)
{
return (NULL);
}
while (str[i])
{
i++;
}
NS = (char *)malloc(sizeof(char) * i + 1);
if (NS == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
NS[j] = str[j];
}
NS[j] = '\0';
return (NS);

}
