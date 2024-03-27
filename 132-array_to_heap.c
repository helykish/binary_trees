#include "binary_trees.h"

/**
 * array_to_heap - make a Max Binary Heap tree using an array
 * @array: a pointer to the 1st value of the array to be converted
 * @size: the count of element in the array
 *
 * Return: a pointer to the root node of the created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
