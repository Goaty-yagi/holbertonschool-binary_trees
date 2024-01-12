#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
	int has_left, has_right;

	if (tree == NULL)
		return (0);

	has_left = has_right = 0;
	if (tree->left)
	{
		binary_tree_is_full(tree->left);
		has_left = 1;
	}

	if (tree->right)
	{
		binary_tree_is_full(tree->right);
		has_right = 1;
	}
	return (has_left == 1 && has_right == 1 ? 1 : 0);
}
