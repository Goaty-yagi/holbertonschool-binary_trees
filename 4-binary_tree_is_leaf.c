#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int result;

	if (!node)
	{
		return (0);
	}

	result = node->left || node->right ? 0 : 1;
	return (result);
}
