#include "sort.h"
/**
 * swap - Swap two integers given
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * quick_partition - function that sort the partition
 * of the array
 * @array: the partitioned array
 * @l: fisrt element of the partionned array
 * @h: last elemnt of the partitionned array
 * @size: size of global array
 * Return: sorted array
 */
int quick_partition(int *array, int l, int h, size_t size)
{
	int pivot, i, j;

	pivot = array[h];
	j = l;
	for (i = l; i < h; i++)
	{
		if (array[i] < pivot)
		{
			swap(&array[j], &array[i]);
			if (array[j] != array[i])
				print_array(array, size);
			j++;
		}
	}
	swap(&array[j], &array[h]);
	if (array[j] != array[h])
		print_array(array, size);
	return (j);
}
/**
 * quick_recursion - function that sort the partition
 * of the array
 * @array: the partitioned array
 * @l: fisrt element of the partionned array
 * @h: last elemnt of the partitionned array
 * @size: size of global array
 * Return: index of the partition
 */
void quick_recursion(int *array, int l, int h, size_t size)
{
	int index;

	if (l < h)
	{
		index = quick_partition(array, l, h, size);
		quick_recursion(array, l, index - 1, size);
		quick_recursion(array, index + 1, h, size);
	}
}
/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: Array to sort
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	quick_recursion(array, 0, size - 1, size);
}
