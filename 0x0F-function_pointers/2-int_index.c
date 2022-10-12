#include "function_pointers.h"
/**
 * int_index-> searches an intiger 
 * @arry: array 
 * @size : size of array
 * cmp: function pointer 
 * Return: returns the index of the first element for cmp does not return 0
 */
 
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
