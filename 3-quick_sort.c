#include "sort.h"
int partition(int *array, int lower, int higher, size_t size);
void quick_sort_recursion(int *array, int lower, int higher, size_t size);


void
quick_sort_rec(int *array, int low, int high, size_t size)
{
	int pi = 0;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quick_sort_rec(array, low, pi - 1, size);
		quick_sort_rec(array, pi + 1, high, size);
	}
}

void
quick_sort(int *array, size_t size)
{
	if
		(!array || size < 2)
		return;

	  quick_sort_rec(array, 0, size - 1, size);
}

int
partition(int *array, int low, int high, size_t size)
{
	int i = 0, j = 0, piv = 0, aux = 0;

	piv = array[high];
	i = low;

	for (j = low; j < high; ++j)
	{
		if (array[j] < piv)
		{
			if (array[i] != array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
			++i;
		}
	}
	if (array[i] != array[high])
	{
		aux = array[i];
		array[i] = array[high];
		array[high] = aux;
		print_array(array, size);
	}
	return (i);
}

