#include "sort.h"
/**
 *selection_sort - sort array with  Selection sort algorithm
 *@array: pointer to the array
 *@size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
int aux = 0, auxOther = 0;
size_t  i = 0, j = 0;

if (array == NULL || size == 0)
return;
while (i < size)
{
aux = array[i];
auxOther = j = i + 1;
while (j < size) 
{
if (aux > array[j])
{
aux = array[j];
auxOther = j;
}
j++;
}
if (aux != array[i])
{
array[auxOther] = array[i];
array[i] = aux;
print_array(array, size);
}
i++;
}
}
