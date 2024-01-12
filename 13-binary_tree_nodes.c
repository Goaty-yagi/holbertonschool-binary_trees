#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes in a binary tree with
 * at least one child.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The number of nodes in the binary tree with at least one child,
 *  or 0 if @tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count;

	if (tree == NULL)
		return (0);

	node_count = 0;

	if (tree->left)
	{
		if (tree->left->right || tree->left->left)
			node_count = node_count + binary_tree_nodes(tree->left);
		else
			node_count = node_count + 1;
	}

	if (tree->right)
	{
		if (tree->right->right || tree->right->left)
			node_count = node_count + binary_tree_nodes(tree->right);
		else
			node_count = node_count + 1;
	}
	if (tree->right && tree->left)
		node_count = node_count + 1;

	return (node_count);
}
