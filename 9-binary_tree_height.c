#include "binary_trees.h"

/**
 * binary_tree_height - a function that
 * measures the height of a binary tree
 * @tree: the root node
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	l = 0;
	r = 0;
	if (tree)
	{
		if (tree->left)
		{
			l =  binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			r =  binary_tree_height(tree->right);
		}
		if (tree->left  || tree->right)
		{
			if (l > r)
				return (l + 1);
			else
				return (r + 1);
		}
	}
	return (0);
}
