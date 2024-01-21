#include "sort.h"

/**
 * bubble_sort - program that sorts an array of integers
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t index_var, j;
	int tmp;

	if (size < 2)
		return;

	for (index_var = 0; index_var < size - 1; index_var++)
	{
		for (j = 0; j < size - index_var - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
