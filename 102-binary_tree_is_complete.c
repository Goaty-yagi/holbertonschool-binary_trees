#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: A pointer to the root node of the binary tree to check
 *
 * Description:
 * This function checks if the binary tree is complete,
 * meaning that all levels, except possibly the last,
 * are completely filled, and all nodes are as left
 * as possible.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: 1 if the binary tree is complete, 0 otherwise
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *queue[8192];
	size_t front = 0, rear = 0, null_encountered = 0;
	binary_tree_t *current;

	if (!tree)
		return (0);

	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		if (!null_encountered)
			current = queue[front];

		if (current == NULL)
			null_encountered = 1;

		if (null_encountered && queue[front + 1])
		{
			return (0);
		}
		if (current)
		{
			queue[rear++] = current->left;
			queue[rear++] = current->right;
		}
		front++;
	}
	return (1);
}
