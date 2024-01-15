#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotates a binary tree to the right.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left_node;

	if (tree == NULL)
		return (NULL);

	if (tree->left == NULL)
		return (NULL);

	left_node = tree->left;
	tree->left = left_node->right;
	if (tree->left != NULL)
	{
		tree->left->parent = tree;
	}
	tree->parent = left_node;
	left_node->right = tree;
	left_node->parent = NULL;

	return (left_node);
}
