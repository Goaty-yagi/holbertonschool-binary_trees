#include "binary_trees.h"

/**
 * binary_tree_height2 - Measure the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Height of the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_height2(const binary_tree_t *tree)
{
	size_t left_h, right_h, H;

	left_h = right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left_h = binary_tree_height2(tree->left);
		left_h = left_h + 1;
	}

	if (tree->right)
	{
		right_h = binary_tree_height2(tree->right);
		right_h = right_h + 1;
	}
	H = left_h >= right_h ? left_h : right_h;
	return (H == 0 ? 1 : H);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Balance factor of the binary tree, or 0 if @tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = right_h = 0;

	left_h = binary_tree_height2(tree->left);
	right_h = binary_tree_height2(tree->right);

	return (left_h - right_h);
}
