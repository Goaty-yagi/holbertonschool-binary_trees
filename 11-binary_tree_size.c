#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = 1; /* at least one*/

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
