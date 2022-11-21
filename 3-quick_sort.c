#include "sort.h"
/**
 * *swap - swap two elements
 * *@a: first element
 * *@b: second element
 * *Return: nothing
 * */
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * *nico_part - implements nico lomuto partition
 * *@array: array
 * *@l: lower limit
 * *@u: upper limit
 * *@size: size of array
 * *Return: pivot
 * */
int nico_part(int *array, int l, int u, size_t size)
{
	int i = l, j = l, p = array[u];
	for (; j < u; j++)
	{
		if (array[j] <= p)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != u)
	{
		swap(&array[i], &array[u]);
		print_array(array, size);
	}

	return (i);
}
/**
 * *_quicksort - implements quick sort
 * *@array: array to be sorted
 * *@l: lower limit
 * *@u: upper limit
 * *@size: size of array
 * *Return: nothing
 * */
void _quicksort(int *array, int l, int u, size_t size)
{
	int p;
	if (l < u)
	{
		p = nico_part(array, l, u, size);
		_quicksort(array, l, p - 1, size);
		_quicksort(array, p + 1, u, size);
	}
}
/**
 * *quick_sort - implements quick sort
 * *@array: array
 * *@size: size of an array
 * *Return: nothing
 * */
void quick_sort(int *array, size_t size)
{
	_quicksort(array, 0, size - 1, size);
}
