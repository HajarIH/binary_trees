#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node
 * @tree: a pointer to the node
 *
 * Return: the depth of a node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;

	d = 0;
	if (tree && tree->parent)
	{
		d = 1 + binary_tree_depth(tree->parent);
	}
	return (d);
}
