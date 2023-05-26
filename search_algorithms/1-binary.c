#include "search_algos.h"
/**
 * 
 * 
*/
int binary_search(int *array, size_t size, int value)
{
    size_t r = size, l = 0, mid;

    while (l <= r)
    {
    printf ("Searching in array: %d\n", binary_search(array, size, value));
    mid = l + (r - l) / 2;

    if (array[mid] == value)
        return (mid);

    if (array[mid] > value)
        r  = mid - 1;
    if (array[mid] < value)
        l = mid + 1;
    }
    return (-1);
}

