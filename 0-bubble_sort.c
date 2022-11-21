#include "sort.h"
/**
 * *bubble_sort - bubble sort
 * *@array: array to be sorted
 * *@size: size of array
 * *Return: Nothing
 * */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swap = 0;
	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		swap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
		if (swap == 0)
			break;
	}
}
