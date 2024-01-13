#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent node.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 *
 * Description: This function creates a new node with the given value and
 * inserts it as the left child of the specified parent node. If the parent
 * already has a left child, the existing left child becomes the left child of
 * the new node, and the new node is set as the left child of the parent.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left)
	{
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
