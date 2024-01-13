#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a given node in a binary tree.
 * @node: A pointer to the node for which the uncle is to be found.
 *
 * Return: A pointer to the uncle node, or NULL if no uncle exists.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *g_parent;

	if (node == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->parent == NULL)
		return (NULL);

	g_parent = parent->parent;

	if (g_parent->left && g_parent->right)
	{
		return (parent->n == g_parent->left->n ? g_parent->right : g_parent->left);
	}
	return (NULL);
}
