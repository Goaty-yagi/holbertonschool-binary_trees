#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_num;

	if (tree == NULL)
		return (0);

	leave_num = 0;
	if (tree->left)
	{
		leave_num = leave_num + binary_tree_leaves(tree->left);
	}

	if (tree->right)
	{
		leave_num = leave_num + binary_tree_leaves(tree->right);
	}
	if (!tree->right && !tree->left)
	{
		leave_num = leave_num + 1;
	}
	return (leave_num);
}
