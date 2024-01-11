#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int result;

	if (!node)
	{
		return (0);
	}

	result = node->left || node->right ? 0 : 1;
	return (result);
}
