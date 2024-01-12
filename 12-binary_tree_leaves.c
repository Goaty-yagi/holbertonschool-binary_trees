#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_num;

	if (tree == NULL)
		return (0);

	leave_num = 1;

	if (tree->left && tree->right)
	{
		leave_num = 2;
		return (leave_num);
	}
	if (tree->left || tree->right)
		return (leave_num);

	return (leave_num);
}
