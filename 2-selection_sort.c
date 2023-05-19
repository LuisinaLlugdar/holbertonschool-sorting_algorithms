#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array of integers to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k = 0;
	int aux = 0, is_min = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		is_min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (is_min > array[j])
			{
				is_min = array[j];
				k = j;
			}
		}
		aux = array[i];
		array[i] = is_min;
		array[k] = aux;
		print_array(array, size);
	}
}
