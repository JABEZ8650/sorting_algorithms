#include "sort.h"
/**
 * *shell_sort - implements shell sort
 * *@array: array
 * *@size: size of array
 * *Return: void
 * */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int tmp;
	if (array == NULL || size < 2)
		return;
	for (; gap < size / 3; gap = (gap * 3) + 1)
		;
	while (gap)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
				array[j] = array[j - gap];
			array[j] = tmp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
