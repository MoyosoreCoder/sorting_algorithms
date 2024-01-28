#include "sort.h"
/**
 * swap - function that swaps integers
 * @a: the array at i
 * @b: the array at j
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition_and_sort - function that handles partition
 * @array: the array
 * @low: the beginning ot the array
 * @high: the enid of the array
 * Return: the pivot index
 */
int partition_and_sort(int *array, size_t size, int low, int high)
{
	int pivot_pos, i, j;

	i = low;
	pivot_pos = array[high];
	/*j = low;*/
	/*pivot_pos = array[high];*/
	/*i = low;*/

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_pos)
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, size);
	return (i);
}
/**
 * quick_sort_recursive - a recursive function that iterate over itself
 * @array: the array
 * @low: the starting index in the array
 * @high: the last index of the array
 *
 * Return: void
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition_and_sort(array, size, low, high);
		quick_sort_recursive(array, size, low, pivot_index - 1);
		quick_sort_recursive(array, size, pivot_index + 1, high);
		/*print_array(array, size);*/
	}
}
/**
 * quick_sort - function that implement quick sort algorithm
 * @array: the array
 * @size: size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	/*print_array(array, size);*/
	quick_sort_recursive(array, size, 0, size - 1);
}
