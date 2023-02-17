#include "sort.h"
/**
 * bubble_sort - sorts an array of integers using Bubble sort
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int tmp;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
			else
			{
				continue;
			}
			print_array(array, size);
		}
	}
}
