#include "sort.h"
/**
 * selection_sort -  
 * 
 * @array:
 * @size:
 */
void selection_sort(int *array, size_t size)
{
	size_t iterador1, iterador2, minimo, temporal;
	/*Entra si es menor que el tamaño del array*/
	for (iterador1 = 0; iterador1 < size; iterador1++)
	{
		/*se asigna el iterador a minino para hacer la comparacion despues*/
		minimo = iterador1;
		/*Iniciamos el ciclo en la posicion anterior mas 1 para que se iterador2 tenga la siguiente posicion y se pueda comparar la anterior con la siguiente*/
		for (iterador2 = iterador1 + 1; iterador2 < size; iterador2++)
		{
			/*Compara la segunda posicion con la primera verificando que sea la 2 menor que la primera*/
			if (array[iterador2] < array[minimo])
				/*si es el caso le asignamos la segunda posicion a minimo que reemplaza la primera posicion*/
				minimo = iterador2;
		}
		/*a temporal le asignamos el valor de iterador1*/
		temporal = array[iterador1];
		/*a ese valor anterior le asignamos minimo que equivale a la siguiente posicion si se cumple la condicional si no pues el mismo valor*/
		array[iterador1] = array[minimo];
		/*le asignamos el valor de minimo a temporal para seguir con el cambio de orden*/
		array[minimo] = temporal;
		if (iterador1 != minimo)
			print_array(array, size);
	}
}
