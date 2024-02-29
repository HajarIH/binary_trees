#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 * @tree: a pointer to the root
 *
 * Return: the balance Factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) -
				binary_tree_height(tree->right));
	return (0);
}

/**
 ** binary_tree_height - a function that
 ** measures the height of a binary tree
 ** @tree: the root node
 **
 ** Return: the height
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	l = 0;
	r = 0;
	if (tree)
	{
		l =  binary_tree_height(tree->left);
		r =  binary_tree_height(tree->right);
		if (l > r)
			return (l + 1);
		else
			return (r + 1);
	}
	return (0);
}
