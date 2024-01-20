#include "sort.h"

void swapIntegers(int *a, int *b);

/**
 * bubble_sort - program that sorts an array of integers
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int index, arrayLength = size;
	bool intSwap;

	if (array == NULL || size < 2)
		return;
	while (intSwap = false)
	{
		for (index = 0; index < arrayLength - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				swapIntegers(array + index, array + index + 1);
				intSwap = false;
			}
		}
		arrayLength--;
	}
}

/**
 * swapIntegers - program that swaps positions of integer in an array
 * @a: pointer to the first number
 * @b: pointer to the second number
 * Return: void
 */

void swapIntegers(int *a, int *b)
{
	int temp = *a;

	temp = *a;
	*a = *b;
	*b = temp;
}
