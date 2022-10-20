#include "lists.h"
/**
 *print_list -> prints the datat of the node
 *@h: the head node pointer
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}