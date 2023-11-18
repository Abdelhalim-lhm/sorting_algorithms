#include "sort.h"
/**
 * bubble_sort - bubble sort function
 * @array: is the array to sort
 * @size: is the size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
