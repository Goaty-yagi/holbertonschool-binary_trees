#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description:
 * This function recursively deletes all nodes in the binary tree starting from
 * the given root node. It frees the memory associated with each node and
 * detaches the node from its parent, if applicable.
 *
 * @tree: Pointer to the root node of the binary tree to be deleted.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	free(tree);
}
