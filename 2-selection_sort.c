#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array of integers to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx_min = 0;
	int aux = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		idx_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx_min])
				idx_min = j;
		}
		if (idx_min != i)
		{
			aux = array[i];
			array[i] = array[idx_min];
			array[idx_min] = aux;
			print_array(array, size);
		}
	}
}
