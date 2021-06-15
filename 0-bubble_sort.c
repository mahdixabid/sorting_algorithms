#include "sort.h"
/**
 * bubble_sort - bubble sorting algorithm
 * @array: Pointer to array to sort
 * @size: Size of array to sort
 * Return: Not return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, count;

	for (i = 0; i < size; i++)
	{
		count = 0;
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				count++;
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
		if (count == 0)
			break;
	}
}
