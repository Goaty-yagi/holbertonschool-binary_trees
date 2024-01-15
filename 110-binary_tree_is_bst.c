#include "binary_trees.h"

/**
 * is_BST - Helper function to check if a binary tree is a valid BST.
 * @node: Pointer to the current node.
 * @prev: Pointer to the previous node's value.
 * description:
 * 1, Left node will be checked if it is smaller than
 * parent val except the first left node.
 * 2, Right node in the first left sub tree will be checked
 * if it is greater than parent val.
 * 3, Once the right nodes are all checked, prev should be
 * the last right val if it exists, otherwise the first left node val.
 * 4, At this point, prev should be smaller than the root val
 * (the first left node will be checked here.)
 * Return: 1 if the subtree is a valid BST, 0 otherwise.
 */

int is_BST(const binary_tree_t *node, int *prev)
{
	if (node == NULL) /* Base case: an empty tree is a BST */
	{
		return (1);
	}

	if (!is_BST(node->left, prev))
	{

		return (0); /* not BST */
	}

	if (*prev != -1 && node->n <= *prev)
	{
		return (0); /* not BST */
	}

	*prev = node->n; /* Update the previous value to the pointer */

	return (is_BST(node->right, prev));
}

/**
 * binary_tree_is_bst - Check if a binary tree is a valid BST.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{

	int prev = -1; /* Initialize prev with an invalid value */

	if (tree == NULL)
	{
		return (0);
	}

	return (is_BST(tree, &prev));
}
