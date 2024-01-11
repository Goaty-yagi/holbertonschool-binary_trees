#include "binary_trees.h"

/**
 * binary_tree_node - set value to the binary_tree_t
 * @parent: parent BT pointer
 * @value: value to be set
 *
 * Return: pointer of binary_tree_t
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt_p;

	bt_p = malloc(sizeof(binary_tree_t));
	if (bt_p == NULL)
	{
		return (NULL);
	}

	bt_p->n = value;
	bt_p->parent = parent;
	bt_p->left = NULL;
	bt_p->right = NULL;

	return (bt_p);
}
