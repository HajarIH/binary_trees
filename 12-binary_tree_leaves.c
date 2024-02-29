#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts
 * the leaves in a binary tree
 * @tree: a pointer to the root of the tree
 *
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave = 0;

	if (tree)
	{
		if (tree->right == NULL && tree->left == NULL)
			leave++;
		leave = leave + binary_tree_leaves(tree->left)
			+ binary_tree_leaves(tree->right);
	}
	return (leave);
}
