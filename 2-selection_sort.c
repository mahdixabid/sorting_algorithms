#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: Pointer to array to sort
 * @size: Length of array to sort
 * Return: Not Return
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, less;
	int tmp, count;


	if (size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		less = i;
		count = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[less])
			{
				less = j;
				count++;
			}
		}
		tmp = array[less];
		array[less] = array[i];
		array[i] = tmp;
		if (count != 0)
			print_array(array, size);
	}
}
