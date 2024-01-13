#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Height of the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = right_h = 0;

	left_h += binary_tree_height(tree->left);
	right_h += binary_tree_height(tree->right);

	if (tree->left || tree->right)
	{
		return ((left_h >= right_h ? left_h : right_h) + 1);
	}
	return (0);
}
