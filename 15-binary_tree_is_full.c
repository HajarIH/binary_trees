#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that
 * checks if a binary tree is full
 * @tree: a pointer to the root
 *
 * Return: 1 if full 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (xnor(tree->left, tree->right))
		return (1 * binary_tree_is_full(tree->left) *
				binary_tree_is_full(tree->right));
	else
		return (0);
}
