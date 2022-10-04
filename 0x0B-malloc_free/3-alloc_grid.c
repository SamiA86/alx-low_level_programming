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
int *NS[][];
int l;
l = width * height;
if (width <= 0 || height <= 0)
return (NULL);
NS = (int *)malloc(sizeof(int) * l);
if (NS == NULL)
return (NULL);
for (int i = 0; i < width; i++)
{
for (int j = 0; j < height; j++)
{
NS[i][j] = 0;
}
return (NS);
}
