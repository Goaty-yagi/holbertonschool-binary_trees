#include "binary_trees.h"

/**
 * find_bst_insert - Find the correct position to insert a node
 * in a Binary Search Tree (BST)
 *
 * @node: Pointer to the current node in the BST
 * @new_node: Pointer to the new node to be inserted
 *
 * This function recursively searches for the correct position
 * to insert the new node in the BST, ensuring that duplicate
 * values are not inserted. If the value already exists,
 * the new node is freed, and NULL is returned. Otherwise,
 * the new node is inserted at the appropriate position and returned.
 *
 * Return: Pointer to the inserted node, or NULL if the value already exists or
 *         memory allocation fails.
 */

bst_t *find_bst_insert(bst_t *node, bst_t *new_node)
{
	if (node == NULL)
		return (NULL);

	if (node->n == new_node->n)
	{
		free(new_node);
		return (NULL);
	}

	if (node->n > new_node->n)
	{
		if (node->left == NULL)
		{
			node->left = new_node;
			new_node->parent = node;
			return (new_node);
		}
		return (find_bst_insert(node->left, new_node));
	}
	else
	{
		if (node->right == NULL)
		{
			node->right = new_node;
			new_node->parent = node;
			return (new_node);
		}
		return (find_bst_insert(node->right, new_node));
	}
}

/**
 * bst_insert - Insert a new node with a given value into
 * a Binary Search Tree (BST)
 *
 * @tree: Pointer to the root of the BST
 * @value: Value to be inserted into the BST
 *
 * This function inserts a new node with the specified value into
 * the BST rooted at the given pointer. If the tree is empty,
 * the new node becomes the root. Otherwise, it calls
 * thefind_bst_insert function to determine the correct position for insertion.
 *
 * Return: Pointer to the inserted node, or NULL if memory allocation fails.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node;

	new_node = malloc(sizeof(bst_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = NULL;
	if (*tree == NULL)
	{
		*tree = new_node;
		return (new_node);
	}
	return (find_bst_insert(*tree, new_node));
}
