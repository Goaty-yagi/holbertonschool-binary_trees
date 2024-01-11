#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node
 * as the right child of a parent node.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 *
 * Description:
 * This function creates a new node with the given value and inserts it as the
 * right child of the specified parent node. If the parent already has a right
 * child, the existing right child becomes the right child of the new node, and
 * the new node is set as the right child of the parent.
 *
 * Return:
 * Pointer to the newly created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *parent_right;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	parent_right = parent->right;
	parent->right = new_node;
	new_node->right = parent_right;

	return (new_node);
}
