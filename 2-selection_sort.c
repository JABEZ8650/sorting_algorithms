#include "sort.h"
/**
 * *selection_sort - implements selection sort
 * *@array: - array list
 * *@size: size of array
 * *Return: nothing
 * */
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, x;
	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		x = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[x])
			{
				x = j;
			}
		}
		if (array[x] != array[i])
		{
			tmp = array[i];
			array[i] = array[x];
			array[x] = tmp;
			print_array(array, size);
		}
	}
}
