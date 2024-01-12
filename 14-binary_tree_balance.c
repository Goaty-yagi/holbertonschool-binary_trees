#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Balance factor of the binary tree, or 0 if @tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	left_h = right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left_h = binary_tree_height(tree->left);
		left_h = left_h == 0 ? 1 : left_h + 1;
	}

	if (tree->right)
	{
		right_h = binary_tree_height(tree->right);
		right_h = right_h == 0 ? 1 : right_h + 1;
	}
	return (left_h - right_h);
}
