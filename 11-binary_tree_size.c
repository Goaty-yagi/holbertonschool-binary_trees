#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The size of the binary tree, or 0 if @tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = 1;

	if (tree->left)
	{
		size = size + binary_tree_height(tree->left);
		size = size == 0 ? 1 : size + 1;
	}

	if (tree->right)
	{
		size = size + binary_tree_height(tree->right);
		size = size == 0 ? 1 : size + 1;
	}

	return (size);
}
