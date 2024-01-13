#include "binary_trees.h"

/**
 * binary_tree_height3 - Measure the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Height of the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_height3(const binary_tree_t *tree)
{
	size_t left_h, right_h, H;

	left_h = right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left_h = binary_tree_height3(tree->left);
		left_h = left_h + 1;
	}

	if (tree->right)
	{
		right_h = binary_tree_height3(tree->right);
		right_h = right_h + 1;
	}
	H = left_h >= right_h ? left_h : right_h;
	return (H == 0 ? 1 : H);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the binary tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result;
	size_t H;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		result =
			binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
		H = binary_tree_height3(tree->left) == binary_tree_height3(tree->right);
		return (H && result);
	}
	return (0);
}
