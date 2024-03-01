#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds
 * the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the commen ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *current, *node;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	current = (binary_tree_t *) first;
	while (current)
	{
		node = (binary_tree_t *)second;
		while (node)
		{
			if (current == node->parent)
				return (current);
			node = node->parent;
		}
		current = current->parent;
	}
	return (NULL);
}
