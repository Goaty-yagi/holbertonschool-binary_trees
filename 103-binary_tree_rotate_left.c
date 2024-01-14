#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a binary tree to the left.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right_node;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	right_node = tree->right;
	tree->right = right_node->left;
	if (tree->right)
	{
		tree->right->parent = tree;
	}
	right_node->left = tree;
	right_node->parent = NULL;

	return (right_node);
}
