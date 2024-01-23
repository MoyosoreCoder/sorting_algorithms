#include "sort.h"
/**
 * swap_num - function that swaps a number
 * @index: position i
 * @min_val: position at minimum value
 * Return: void
 */
void swap_num(int *index, int *min_val)
{
	int temp;

	temp = *index;
	*index = *min_val;
	*min_val  = temp;
}

/**
 * selection_sort - program that sorts an array of integers
 * @array: array of integers
 * @size: length of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_value;

	for (i = 0; i < size - 1; i++)
	{
		min_value = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[min_value] > array[j])
			{
				min_value = j;
			}
		}
		if (min_value != i)
		{
			/*temp = a[i];*/
			/*array[i] = array[min_index];*/
			/*array[min_index] = temp;*/
			swap_num(&array[i], &array[min_value]);

			print_array(array, size);
		}
	}
}
