#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a given node is a root
 * @node: the node to check
 *
 * Return: 1 if root and 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
