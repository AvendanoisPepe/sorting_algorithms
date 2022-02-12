#include "sort.h"
/**
 * swap - Intercambia el valor pasado por parametros.
 * @xp: Indice del primer valor.
 * @yp: Indice del segundo valor.
 * @array: Array de enteros.
 * @size: Tamaño del array.
 */
void swap(int *xp, int *yp, int *array, size_t size)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	if (*xp != *yp)
		print_array(array, size);
}

/**
 * partition - Funcion que implementa el esquema de particion.
 * @arr: Puntero que apunta a el array..
 * @low: Minimo index.
 * @high: Maximo index.
 * @size: Tamaño del array.
 * Return: El numero de la particion.
 */
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1), j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j], arr, size);
		}
	}
	swap(&arr[i + 1], &arr[high], arr, size);
	return (i + 1);
}

/**
 * quickSort - Ordena una particion de una matrix de enteros.
 * @arr: Puntero a la matrix.
 * @low: Indice mas bajo.
 * @high: Indice mas alto.
 * @size: Tamaño de la matrix.
 */
void quickSort(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);

		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - Ordena una matrix de enteros usando la
 * funcion anterior.
 * @array: Array de enteros.
 * @size: Tamaño del array.
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
