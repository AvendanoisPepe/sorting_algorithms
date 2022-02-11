#include "sort.h"
/**
*insertion_sort_list - Ordena los nodos de la lista de menor a mayor
*@list: Doble lista enlazada a verificar
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *siguiente, *actual;
	listint_t *anterior;

	if (list == NULL || *list == NULL)
		return;

	actual = (*list)->next;

	while (actual)
	{
		siguiente = actual->next;
		anterior = actual->prev;
		while (anterior != NULL && actual->n < anterior->n)
		{
			anterior->next = actual->next;
			if (actual->next != NULL)
				actual->next->prev = anterior;
			actual->prev = anterior->prev;
			actual->next = anterior;
			if (anterior->prev != NULL)
				anterior->prev->next = actual;
			else
				*list = actual;
			anterior->prev = actual;
			anterior = actual->prev;
			print_list(*list);
		}
		actual = siguiente;
	}
}
