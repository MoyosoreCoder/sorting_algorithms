#include "sort.h"

/**
 * selection_sort - program that sorts an array of integers
 * @array: array of integers
 * @size: length of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int i, j, n, min_index;
	void(size);

	for (i = 0; i < n - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[min_index] < array[j])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			int temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
		}
	}
}	
