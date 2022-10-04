#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid -> two dimensional array pointer
 *@width:width of the two dimenssional array
 *@height: height of the two dimenssional array
 *Return: pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **ar;
if (width <= 0 || height <= 0)
return (NULL);
ar = malloc(height * sizeof(int *));
if (ar == NULL)
{
free(ar);
return (NULL);
}
for (i = 0; i < height; i++)
{
ar[i] = malloc(width * sizeof(int));
if (ar[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(ar[j]);
}
free(ar);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
ar[k][l] = 0;
}
return (ar);
}
