#include "lists.h"
/**
 *print_list -> prints the datat of the node
 *@h: the head node pointer
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 1; n != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		printf("[%d] %s ", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
