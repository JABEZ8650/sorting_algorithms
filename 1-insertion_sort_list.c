#include "sort.h"
/**
 * *insertion_sort_list - implments insertion in linked list
 * *@list: list of double linked list
 * *Return: void
 * */
void insertion_sort_list(listint_t **list)
{
	listint_t  *tmp, *hold;
	if (list == NULL || *list == NULL)
		return;
	tmp = (*list)->next;
	while (tmp)
	{
		hold = tmp->next;
		while (tmp->prev && tmp->prev->n > tmp->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->next->prev;
			tmp->next->prev = tmp;
			tmp->prev == NULL ? (*list = tmp) : (tmp->prev->next = tmp);
			print_list(*list);
		}
		tmp = hold;
	}
}
