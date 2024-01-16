#include "binary_trees.h"

bst_t *find_bst_insert(bst_t *node, bst_t *new_node)
{
	if (node == NULL)
		return (NULL);

	if (node->n > new_node->n && !(find_bst_insert(node->left, new_node)))
	{
		if (node->n == new_node->n)
			return (NULL);
		node->left = new_node;
		new_node->parent = node;
		return (new_node);
	}
	if (node->n < new_node->n && !(find_bst_insert(node->right, new_node)))
	{
		if (node->n == new_node->n)
			return (NULL);
		node->right = new_node;
		new_node->parent = node;
		return (new_node);
	}
	return (new_node);
}

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node;

	new_node = malloc(sizeof(bst_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	if (*tree == NULL)
	{
		*tree = new_node;
		return (new_node);
	}
	return (find_bst_insert(*tree, new_node));
}
