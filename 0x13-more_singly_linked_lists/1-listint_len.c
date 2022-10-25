#include "lists.h"
/**
 * listint_len - Returns the number of elements
 * *@h: head node pointer
 * *Return: the length of elements in list
 */

size_t listint_len(const listint_t *h)

{
size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}

