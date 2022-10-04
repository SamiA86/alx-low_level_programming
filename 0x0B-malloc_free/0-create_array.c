#include "main.h"
#include <stdlib.h>
/**
 *create_array -> creates array and intializes
 * @size arrgument for size of the array
 * @c arrgumetn for initialize character
 * return a pointer to dynamically allocated array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char* sz = (char *) malloc(size * sizeof(char));
if (size == 0)
return (NULL);
if (sz == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
sz[i] = c;
}
return (sz);
}

