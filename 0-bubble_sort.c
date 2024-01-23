#include <stdio.h>
#include "sort.h"

/**
* bubble_sort - sorting an array using bubble
* @array: list of items to be sorted
* @size: the size
*/
void bubble_sort(int *array, size_t size)
{
unsigned int z;
unsigned int li;
int ri;
if (array == NULL || size < 2)
return;
for (li = 0; li < size; li++)
{
for (z = 0; z < size - li - 1; z++)
{
if (array[z] > array[z + 1])
{
ri = array[z];
array[z] = array[z + 1];
array[z + 1] = ri;
print_array(array, size);
}
}
}
}
