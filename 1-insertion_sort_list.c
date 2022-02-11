#include "sort.h"
/**
*insertion_sort_list - 
*@list:
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *siguiente, *anterior;

	if (list == NULL || *list == NULL)
		return;
	
	anterior = (*list)->next;

	while(anterior)
	{
		siguiente = anterior->next;
		//verificamos que no sea nulo y que el valor sea mayor a n
		while(anterior->prev != NULL && anterior->prev->n > anterior->n)
		{
			if(anterior->next != NULL)
				anterior->next->prev = anterior->prev;
			anterior->next = anterior->prev;
			anterior->prev = anterior->next->prev;
			anterior->next->prev = anterior;
		}
	}
}
