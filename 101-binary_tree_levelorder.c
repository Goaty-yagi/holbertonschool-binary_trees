#include "binary_trees.h"

/**
 * binary_tree_levelorder - Performs level-order traversal on a binary tree
 * @tree: A pointer to the root node of the binary tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Description:
 * This function traverses a binary tree in level-order, starting
 * from the root node. For each visited node, the provided function
 * 'func' is called with the value of the node.
 *
 * Return: void (no return value)
 */

void binary_tree_levelorder(
	const binary_tree_t *tree,
	void (*func)(int))
{
	binary_tree_t **queue;
	size_t front = 0, rear = 0;
	binary_tree_t *current;

	if (!tree || !func)
		return;

	queue = malloc(sizeof(binary_tree_t *) * 1024);
	if (queue == NULL)
		return;

	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		current = queue[front++];
		func(current->n);

		if (current->left)
			queue[rear++] = current->left;
		if (current->right)
			queue[rear++] = current->right;
	}

	free(queue);
}
