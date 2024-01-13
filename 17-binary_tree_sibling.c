#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree.
 * @node: A pointer to the node for which the sibling is to be found.
 *
 * Return: A pointer to the sibling node, or NULL if no sibling exists.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->left && parent->right)
	{
		return (node->n == parent->left->n ? parent->right : parent->left);
	}
	return (NULL);
}
