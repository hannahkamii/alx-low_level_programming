#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: the size of array
 * @cmp: a pointer to function to be used to compare values
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (q = 0 ; q < size ; q++)
	{
		if (cmp(array[q]) != 0)
			return (q);
	}
	return (-1);
}
