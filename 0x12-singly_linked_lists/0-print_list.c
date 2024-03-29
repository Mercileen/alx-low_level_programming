#include <stdio.h>
#include "lists.h"

/**
 * print_list - C function that prints all elements of linked list
 * @h: pointer to print list_t list
 * Return: number of nodes to be printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
