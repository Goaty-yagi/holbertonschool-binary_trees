#include "binary_trees.h"

/**
 * array_to_bst - Converts an array to a Binary Search Tree (BST)
 * @array: Pointer to the array of integers
 * @size: Size of the array
 *
 * Return: Pointer to the root of the created BST
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root;
	size_t counter = 0;

	root = NULL;
	while (counter < size)
	{

		bst_insert(&root, array[counter]);
		counter = counter + 1;
	}
	return (root);
}
