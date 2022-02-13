#include "sort.h"
/**
 * shell_sort - Ordena una particion de una matrix de enteros.
 * @array: Puntero a la matrix.
 * @size: Tamaño de la matrix.
 */
void shell_sort(int *array, size_t size)
{
	int j, k;
	size_t incr, i;

	incr = 1;
	while (incr <= (size - 1) / 9)
		incr = 3 * incr + 1;
	printf("%ld", incr);
	while (incr >= 1)
	{
		for (i = incr; i < size; i++)
		{
			k = array[i];
			for (j = i - incr; j >= 0 && k < array[j]; j = j - incr)
				array[j + incr] = array[j];
			array[j + incr] = k;
		}
		incr = incr / 3;
	}
}
