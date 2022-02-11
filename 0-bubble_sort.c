#include "sort.h"
/**
*bubble_sort - Ordena una matriz en orden ascendente
*@array: La matriz que debemos ordenar
*@size: El tamaño de la matrix
*/
void bubble_sort(int *array, size_t size)
{
	size_t iterador, iterador2;
	size_t tam = size, nuevo;

	for (iterador = 0; iterador < tam; iterador++)
	{
		for (iterador2 = 0; iterador2 < tam - 1; iterador2++)
		{
			if (array[iterador2] > array[iterador2 + 1])
			{
				nuevo = array[iterador2];
				array[iterador2] = array[iterador2 + 1];
				array[iterador2 + 1] = nuevo;
				print_array(array, tam);
			}
		}
	}
}
