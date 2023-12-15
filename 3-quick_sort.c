#include "sort.h"


/**
 * quick_sort - sorts an array of integers in ascending order.
 * Description: using the Quick sort algorithm, (Lomuto partition)
 * it is slightly faster
 * than merge sort and heapsort for randomized data,
 * particularly on larger distributions.
 * @array: array of integers
 * @size: legnth of @array
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}


/**
 * _qsort - sort ascending recursively
 * @arr: array of int
 * @lo: smallest index corresponds to array half
 * @hi: biggest index corresponds to the half
 * @size: legnth of array
 *
 * Return: Nothing
 */
void _qsort(int *arr, int lo, int hi, size_t size)
{
	int pidx;

	if (lo >= hi || lo < 0)
		return;
	pidx = partition(arr, lo, hi, size);

	_qsort(arr, lo, pidx - 1, size);
	_qsort(arr, pidx + 1, hi, size);
}
/**
 * partition - parition the array to determine the pivot
 * @arr: array of int
 * @lo: smallest index corresponds to array half
 * @hi: biggest index corresponds to the half
 * @size: legnth of array
 *
 * Return: pivot index
 */
int partition(int *arr, int lo, int hi, size_t size)
{
	int i = lo - 1, j = lo,
	    pivot = arr[hi], tmp;
	static int ignore;

	for (j = lo; j < hi; j++)
	{
		if (arr[j] <= pivot)
		{
			/* swap, and advance `i` */
			tmp = arr[++i];
			arr[i] = arr[j];
			arr[j] = tmp;
			if (!ignore)
				print_array(arr, size);
			ignore = 1;
		}
	}

	/* shift the pivot to its right position */
	tmp = arr[++i];
	arr[i] = arr[hi];
	arr[hi] = tmp;
	print_array(arr, size);

	return (i);
}
