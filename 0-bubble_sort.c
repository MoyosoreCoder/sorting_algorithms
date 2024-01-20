#include "sort.h"

/**
 * bubble_sort - program that sorts an array of integers
 * @array: array of integers to be sorted
 * @size: size of the array
 * 
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
