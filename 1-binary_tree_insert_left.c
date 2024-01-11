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
	binary_tree_t *bt_p, *parent_left;

	if (parent == NULL)
		return (NULL);

	bt_p = malloc(sizeof(binary_tree_t));
	if (bt_p == NULL)
		return (NULL);

	bt_p->n = value;
	bt_p->parent = parent;
	bt_p->left = NULL;
	bt_p->right = NULL;

	parent_left = parent->left;
	parent->left = bt_p;
	bt_p->left = parent_left;

	return (bt_p);
}
