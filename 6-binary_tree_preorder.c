#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using preorder traversal.
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to a function to call for each node value.
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL | func == NULL)
		return;

	func(tree->n);

	if (tree->left)
		binary_tree_preorder(tree->left, func);

	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
