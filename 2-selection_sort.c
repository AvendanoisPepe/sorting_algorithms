#include "sort.h"
/**
 * selection_sort -  Ordena una matrix siguiendo el
 * ordenamiento por seleccion.
 * @array: Array a ordenar.
 * @size: Tamaño del array.
 */
void selection_sort(int *array, size_t size)
{
	size_t iterador1, iterador2, minimo, temporal;

	for (iterador1 = 0; iterador1 < size; iterador1++)
	{
		minimo = iterador1;
		for (iterador2 = iterador1 + 1; iterador2 < size; iterador2++)
		{
			if (array[iterador2] < array[minimo])
				minimo = iterador2;
		}
		temporal = array[iterador1];
		array[iterador1] = array[minimo];
		array[minimo] = temporal;
		if (iterador1 != minimo)
			print_array(array, size);
	}
}
