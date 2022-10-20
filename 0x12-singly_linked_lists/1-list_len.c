#include "lists.h"
/**
 * list_len-> a function returns the length of elements in list
 * *@h: head node pointer
 * *Retrun: the length of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t elem =0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}



