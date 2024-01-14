#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor
 * of two nodes in a binary tree
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes,
 *         or NULL if no common ancestor was found
 */

binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *cp_first = (binary_tree_t *)first;
	binary_tree_t *cp_second = (binary_tree_t *)second;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	while (cp_first)
	{
		while (cp_second)
		{
			if (cp_first == cp_second)
			{
				return (cp_first);
			}
			cp_second = cp_second->parent;
		}
		cp_second = (binary_tree_t *)second;
		cp_first = cp_first->parent;
	}

	return (NULL);
}
