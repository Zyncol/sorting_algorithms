#include "sort.h"
/**
*swapps_swapping - for swapping integers
*@r: the first to be swapped
*@o: the second to be swapped
**/
void swapps_swapping(int *r, int *o)
{
int swp;
swp = *r;
*r = *o;
*o = swp;
}

/**
*selection_sort - arrays sorted using selection
*@array: array to be sorted
*@size: the size od an array given
**/
void selection_sort(int *array, size_t size)
{
size_t li, ze;
int *smaLL;

if (array == NULL || size < 2)
return;
ze = 0;
while (ze < size - 1)
{
smaLL = array + 1;
for (li = ze + 1; li < size; li++)
{
smaLL = (array[li] < *smaLL) ? (array + li) : smaLL;
}
if ((array + ze) != smaLL)
{
swapps_swapping(array + ze, smaLL);
print_array(array, size);
}
ze++;
}
}
