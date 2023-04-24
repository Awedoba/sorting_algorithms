#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - a function that sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: sort array.
 * @size: size of array.
 * Return: Void function.
 */

void bubble_sort(int *array, size_t size)
{
size_t tmp, traverse, index;

if (array == NULL || size < 2)
{
return;
}

/** loop then traverseerse an array */
for (traverse = 1; traverse < size; traverse++)
{
/** loop index the element */
for (index = 0; index < size - 1; index++)
{
/** freater element */
if (array[index] > array[index + 1])
{
/** the swap of elements */
tmp = array[index];
array[index] = array[index + 1];
array[index + 1] = tmp;
print_array(array, size);
}
}
}
}
