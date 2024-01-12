#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node for which to measure the depth.
 *
 * Return: The depth of the node, or 0 if @tree is NULL or the root.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 0;

	if (tree->parent)
	{
		depth = binary_tree_depth(tree->parent);
		depth = depth == 0 ? 1 : depth + 1;
	}

	return (depth);
}
