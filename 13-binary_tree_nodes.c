#include "binary_trees.h"

/**
 * binary_tree_nodes -  a function that counts
 * the nodes with at least 1 child
 * @tree: a pointer to the root
 *
 * Return: the number of nodes with > 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			n++;
		n = n + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right);
	}
	return (n);
}
